#ifndef __MDFN_TYPES
#define __MDFN_TYPES

#include <assert.h>
#include <stddef.h>
#include <stdint.h>

#include <retro_inline.h>

/* Fixed-width aliases. These are valid C89 (typedefs of the
 * <stdint.h> types) and are retained to avoid churning every call
 * site over to the uint8_t/... spellings. New code may use either. */
typedef int8_t   int8;
typedef int16_t  int16;
typedef int32_t  int32;
typedef int64_t  int64;

typedef uint8_t  uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;

#ifdef __GNUC__
#define MDFN_UNLIKELY(n) __builtin_expect((n) != 0, 0)
#define MDFN_LIKELY(n) __builtin_expect((n) != 0, 1)

  #define NO_INLINE __attribute__((noinline))
  #define FORCE_INLINE inline __attribute__((always_inline))

  #if defined(__386__) || defined(__i386__) || defined(__i386) || defined(_M_IX86) || defined(_M_I386)
    #define MDFN_FASTCALL __attribute__((fastcall))
  #else
    #define MDFN_FASTCALL
  #endif

  #define MDFN_ALIGN(n)	__attribute__ ((aligned (n)))
  #define MDFN_FORMATSTR(a,b,c) __attribute__ ((format (a, b, c)))
  #define MDFN_WARN_UNUSED_RESULT __attribute__ ((warn_unused_result))
  #define MDFN_NOWARN_UNUSED __attribute__((unused))

#elif defined(_MSC_VER)
#if _MSC_VER < 1800
#define roundf(in) (in >= 0.0f ? floorf(in + 0.5f) : ceilf(in - 0.5f))
#endif
  #define NO_INLINE
  #define FORCE_INLINE __forceinline

  #define MDFN_LIKELY(n) ((n) != 0)
  #define MDFN_UNLIKELY(n) ((n) != 0)

  #define MDFN_FASTCALL

  /* The __declspec(align(n)) form is rejected by the MSVC C compiler
   * in several of the positions this codebase uses MDFN_ALIGN (notably
   * on local array declarations under the C89 target). Expanding to
   * nothing is always correct -- it only forfeits an alignment hint,
   * never correctness. */
  #define MDFN_ALIGN(n)

  #define MDFN_FORMATSTR(a,b,c)

  #define MDFN_WARN_UNUSED_RESULT
  #define MDFN_NOWARN_UNUSED

#else
  #error "Not compiling with GCC nor MSVC"
  #define NO_INLINE
  #define FORCE_INLINE inline

  #define MDFN_FASTCALL

  #define MDFN_ALIGN(n)

  #define MDFN_FORMATSTR(a,b,c)

  #define MDFN_WARN_UNUSED_RESULT
  #define MDFN_NOWARN_UNUSED

#endif

/* MDFN_HOT / MDFN_COLD: branch-prediction / hot-cold section hints.
 * GCC and clang support the attributes; MSVC has no equivalent. */
#if defined(__GNUC__) || defined(__clang__)
 #define MDFN_HOT  __attribute__((hot))
 #define MDFN_COLD __attribute__((cold))
#else
 #define MDFN_HOT
 #define MDFN_COLD
#endif

/* MDFN_STATIC_ASSERT(condition, message) -- portable compile-time
 * assertion. Uses the language-native form where available (C++11
 * keyword or C11 _Static_assert) and falls back to the negative
 * array-bound trick for older compilers (portable to C89 and C++98).
 *
 * The fallback's uniqueness tag uses __LINE__ rather than __COUNTER__
 * so it has no side effect on counter-based checkpoints. Do not place
 * two MDFN_STATIC_ASSERT()s on the same source line. */
#if defined(__cplusplus) && __cplusplus >= 201103L
 #define MDFN_STATIC_ASSERT(c_, msg_) static_assert((c_), msg_)
#elif !defined(__cplusplus) && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
 #define MDFN_STATIC_ASSERT(c_, msg_) _Static_assert((c_), msg_)
#else
 #define MDFN_STATIC_ASSERT_CAT2_(a_, b_) a_##b_
 #define MDFN_STATIC_ASSERT_CAT_(a_, b_)  MDFN_STATIC_ASSERT_CAT2_(a_, b_)
 #define MDFN_STATIC_ASSERT(c_, msg_) \
   typedef char MDFN_STATIC_ASSERT_CAT_(_mdfn_static_assert_, __LINE__) \
        [(c_) ? 1 : -1] MDFN_NOWARN_UNUSED
#endif

#undef require
#define require( expr ) assert( expr )

#endif
