// Band-limited sound synthesis buffer
// Various changes and hacks for use in Mednafen.

#ifdef __GNUC__
#define blip_inline inline __attribute__((always_inline))
#else
#define blip_inline inline
#endif

#include <limits.h>
#include <stdint.h>

// Blip_Buffer 0.4.1
#ifndef BLIP_BUFFER_H
#define BLIP_BUFFER_H

// Internal
typedef int32_t blip_long;
typedef uint32_t blip_ulong;
typedef int64_t blip_s64;
typedef uint64_t blip_u64;

// Time unit at source clock rate
typedef blip_long blip_time_t;

// Output samples are 16-bit signed, with a range of -32768 to 32767
typedef short blip_sample_t;
enum { blip_sample_max = 32767 };

typedef const char* blargg_err_t;
typedef blip_u64 blip_resampled_time_t;
typedef blip_resampled_time_t resampled_time_t;
typedef blip_time_t blip_buf_t_;

typedef struct
{
   blip_u64 factor;
   blip_resampled_time_t offset;
   blip_buf_t_* buffer;
   blip_long buffer_size;
   blip_long reader_accum;
   int bass_shift;
   long sample_rate;
   long clock_rate;
   int bass_freq;
   int length;
   int modified;
}Blip_Buffer;

void Blip_Buffer_init(Blip_Buffer* bbuf);
void Blip_Buffer_deinit(Blip_Buffer* bbuf);

// Set output sample rate and buffer length in milliseconds (1/1000 sec, defaults
// to 1/4 second), then clear buffer. Returns NULL on success, otherwise if there
// isn't enough memory, returns error without affecting current buffer setup.
blargg_err_t Blip_Buffer_set_sample_rate(Blip_Buffer* bbuf, long samples_per_sec, int msec_length = 1000 / 4);

// Set number of source time units per second
void Blip_Buffer_clock_rate(Blip_Buffer* bbuf,long);

// End current time frame of specified duration and make its samples available
// (along with any still-unread samples) for reading with read_samples(). Begins
// a new time frame at the end of the current frame.
void Blip_Buffer_end_frame(Blip_Buffer* bbuf, blip_time_t time);

// Read at most 'max_samples' out of buffer into 'dest', removing them from from
// the buffer. Returns number of samples actually read and removed. If stereo is
// true, increments 'dest' one extra time after writing each sample, to allow
// easy interleving of two channels into a stereo output buffer.
long Blip_Buffer_read_samples(Blip_Buffer* bbuf, blip_sample_t* dest, long max_samples);

// Additional optional features

// Current output sample rate
long Blip_Buffer_sample_rate(Blip_Buffer* bbuf);

// Length of buffer, in milliseconds
int Blip_Buffer_length(Blip_Buffer* bbuf);

// Number of source time units per second
long Blip_Buffer_clock_rate(Blip_Buffer* bbuf);

// Set frequency high-pass filter frequency, where higher values reduce bass more
void Blip_Buffer_bass_freq(Blip_Buffer* bbuf, int frequency);

// Number of samples delay from synthesis to samples read out
int Blip_Buffer_output_latency(Blip_Buffer* bbuf);

// Remove all available samples and clear buffer to silence. If 'entire_buffer' is
// false, just clears out any samples waiting rather than the entire buffer.
void Blip_Buffer_clear(Blip_Buffer* bbuf, int entire_buffer = 1);

// Number of samples available for reading with read_samples()
long Blip_Buffer_samples_avail(Blip_Buffer* bbuf);

// Remove 'count' samples from those waiting to be read
void Blip_Buffer_remove_samples(Blip_Buffer* bbuf, long count);

// Experimental features

// Count number of clocks needed until 'count' samples will be available.
// If buffer can't even hold 'count' samples, returns number of clocks until
// buffer becomes full.
blip_time_t Blip_Buffer_count_clocks(Blip_Buffer* bbuf, long count);

// Number of raw samples that can be mixed within frame of specified duration.
long Blip_Buffer_count_samples(Blip_Buffer* bbuf, blip_time_t duration);

// Mix 'count' samples from 'buf' into buffer.
void Blip_Buffer_mix_samples(Blip_Buffer* bbuf, blip_sample_t const* buf, long count);

void Blip_Buffer_remove_silence(Blip_Buffer* bbuf, long count);

static inline blip_resampled_time_t Blip_Buffer_resampled_time(Blip_Buffer* bbuf, blip_time_t t)
{
   return t * bbuf->factor + bbuf->offset;
}
blip_resampled_time_t Blip_Buffer_clock_rate_factor(Blip_Buffer* bbuf, long clock_rate);

//blargg_err_t Blip_Buffer_sample_rate(Blip_Buffer* bbuf, long r)
//{
//   return Blip_Buffer_set_sample_rate(bbuf, r);
//}
//blargg_err_t Blip_Buffer_sample_rate(Blip_Buffer* bbuf, long r, int msec)
//{
//   return Blip_Buffer_set_sample_rate(bbuf, r, msec);
//}

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#define BLIP_BUFFER_ACCURACY 32
#define BLIP_PHASE_BITS 8

// Number of bits in resample ratio fraction. Higher values give a more accurate ratio
// but reduce maximum buffer size.
//#ifndef BLIP_BUFFER_ACCURACY
// #define BLIP_BUFFER_ACCURACY 16
//#endif

// Number bits in phase offset. Fewer than 6 bits (64 phase offsets) results in
// noticeable broadband noise when synthesizing high frequency square waves.
// Affects size of Blip_Synth objects since they store the waveform directly.
//#ifndef BLIP_PHASE_BITS
// #if BLIP_BUFFER_FAST
//    #define BLIP_PHASE_BITS 8
// #else
//    #define BLIP_PHASE_BITS 6
// #endif
//#endif

// Internal
typedef blip_u64 blip_resampled_time_t;
int const blip_widest_impulse_ = 16;
int const blip_buffer_extra_ = blip_widest_impulse_ + 2;
int const blip_res = 1 << BLIP_PHASE_BITS;
class blip_eq_t;

class Blip_Synth_Fast_
{
public:
   Blip_Buffer* buf;
   int last_amp;
   int delta_factor;

   void volume_unit(double);
   Blip_Synth_Fast_();
};

// Quality level. Start with blip_good_quality.
const int blip_med_quality  = 8;
const int blip_good_quality = 12;
const int blip_high_quality = 16;

// Range specifies the greatest expected change in amplitude. Calculate it
// by finding the difference between the maximum and minimum expected
// amplitudes (max - min).
template<int quality, int range>
class Blip_Synth
{
public:
   // Set overall volume of waveform
   void volume(double v)
   {
      impl.volume_unit(v * (1.0 / (range < 0 ? -range : range)));
   }

   // Get/set Blip_Buffer used for output
   Blip_Buffer* output() const
   {
      return impl.buf;
   }
   void output(Blip_Buffer* b)
   {
      impl.buf = b;
      impl.last_amp = 0;
   }

   // Update amplitude of waveform at given time. Using this requires a separate
   // Blip_Synth for each waveform.
   void update(blip_time_t time, int amplitude);

   // Low-level interface

//   // Add an amplitude transition of specified delta, optionally into specified buffer
//   // rather than the one set with output(). Delta can be positive or negative.
//   // The actual change in amplitude is delta * (volume / range)
   void offset(blip_time_t, int delta, Blip_Buffer*) const;
   void offset(blip_time_t t, int delta) const
   {
      offset(t, delta, impl.buf);
   }

   // Works directly in terms of fractional output samples. Contact author for more info.
   void offset_resampled(blip_resampled_time_t, int delta, Blip_Buffer*) const;

   // Same as offset(), except code is inlined for higher performance
   void offset_inline(blip_time_t t, int delta, Blip_Buffer* buf) const
   {
      offset_resampled(t * buf->factor + buf->offset, delta, buf);
   }
   void offset_inline(blip_time_t t, int delta) const
   {
      offset_resampled(t * impl.buf->factor + impl.buf->offset, delta, impl.buf);
   }

private:
   Blip_Synth_Fast_ impl;
};


int const blip_sample_bits = 30;

// Optimized reading from Blip_Buffer, for use in custom sample output

// Begin reading from buffer. Name should be unique to the current block.
#define BLIP_READER_BEGIN( name, blip_buffer ) \
   const blip_buf_t_* name##_reader_buf = (blip_buffer).buffer;\
   blip_long name##_reader_accum = (blip_buffer).reader_accum

// Get value to pass to BLIP_READER_NEXT()
#define BLIP_READER_BASS( blip_buffer ) ((blip_buffer).bass_shift)

// Constant value to use instead of BLIP_READER_BASS(), for slightly more optimal
// code at the cost of having no bass control
int const blip_reader_default_bass = 9;

// Current sample
#define BLIP_READER_READ( name )        (name##_reader_accum >> (blip_sample_bits - 16))

// Current raw sample in full internal resolution
#define BLIP_READER_READ_RAW( name )    (name##_reader_accum)

// Advance to next sample
#define BLIP_READER_NEXT( name, bass ) \
   (void) (name##_reader_accum += *name##_reader_buf++ - (name##_reader_accum >> (bass)))

// End reading samples from buffer. The number of samples read must now be removed
// using Blip_Buffer_remove_samples().
#define BLIP_READER_END( name, blip_buffer ) \
   (void) ((blip_buffer).reader_accum = name##_reader_accum)


// Compatibility with older version
const long blip_unscaled = 65535;
const int blip_low_quality  = blip_med_quality;
const int blip_best_quality = blip_high_quality;

// End of public interface

#include <assert.h>

template<int quality, int range>
blip_inline void Blip_Synth<quality, range>::offset_resampled(
   blip_resampled_time_t time,
   int delta, Blip_Buffer* blip_buf) const
{
   // Fails if time is beyond end of Blip_Buffer, due to a bug in caller code or the
   // need for a longer buffer as set by set_sample_rate().
   assert((blip_long)(time >> BLIP_BUFFER_ACCURACY) < blip_buf->buffer_size);
   delta *= impl.delta_factor;
   blip_long* buf = blip_buf->buffer + (time >>
                                  BLIP_BUFFER_ACCURACY);
   int phase = (int)(time >> (BLIP_BUFFER_ACCURACY - BLIP_PHASE_BITS) &
                     (blip_res - 1));

   blip_long left = buf [0] + delta;

   // Kind of crappy, but doing shift after multiply results in overflow.
   // Alternate way of delaying multiply by delta_factor results in worse
   // sub-sample resolution.
   blip_long right = (delta >> BLIP_PHASE_BITS) * phase;
   left  -= right;
   right += buf [1];

   buf [0] = left;
   buf [1] = right;
}

#undef BLIP_FWD
#undef BLIP_REV

template<int quality, int range>
blip_inline void Blip_Synth<quality, range>::offset(blip_time_t t, int delta,
      Blip_Buffer* buf) const
{
   offset_resampled(t * buf->factor + buf->offset, delta, buf);
}

template<int quality, int range>
blip_inline void Blip_Synth<quality, range>::update(blip_time_t t, int amp)
{
   int delta = amp - impl.last_amp;
   impl.last_amp = amp;
   offset_resampled(t * impl.buf->factor + impl.buf->offset, delta, impl.buf);
}

blip_inline int  Blip_Buffer_length(Blip_Buffer* bbuf)
{
   return bbuf->length;
}
blip_inline long Blip_Buffer_samples_avail(Blip_Buffer* bbuf)
{
   return (long)(bbuf->offset >> BLIP_BUFFER_ACCURACY);
}
blip_inline int  Blip_Buffer_output_latency(Blip_Buffer* bbuf)
{
   return blip_widest_impulse_ / 2;
}
blip_inline long Blip_Buffer_get_clock_rate(Blip_Buffer* bbuf)
{
   return bbuf->clock_rate;
}
blip_inline void Blip_Buffer_set_clock_rate(Blip_Buffer* bbuf, long cps)
{
   bbuf->factor = Blip_Buffer_clock_rate_factor(bbuf, bbuf->clock_rate = cps);
}

int const blip_max_length = 0;
int const blip_default_length = 250;

#endif
