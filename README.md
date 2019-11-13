[![Build Status](https://travis-ci.org/libretro/beetle-pce-fast-libretro.svg?branch=master)](https://travis-ci.org/libretro/beetle-pce-fast-libretro)
[![Build status](https://ci.appveyor.com/api/projects/status/6hii7ljchwjp80la/branch/master?svg=true)](https://ci.appveyor.com/project/bparker06/beetle-pce-fast-libretro/branch/master)

# Beetle PC Engine Fast libretro

Beetle PC Engine Fast is a port/fork of Mednafen's PC Engine Fast module to the libretro API. This libretro core contains CD-ROM<sup>2</sup> support but unlike Mednafen's PCE Fast module, lacks SuperGrafx support. A separate libretro PC Engine core with SuperGrafx support can be found here: https://github.com/libretro/beetle-supergrafx-libretro

This repository also contains a port/fork of Mednafen's PC Engine module on the `pce` branch. This PC Engine module is more accurate than the Fast module, which trades away typically unneeded accuracy in favor of speed. Unlike the Fast module however, this module fork retains built-in SuperGrafx support.

## Building

The PCE Fast core can be built with `make` in the `master` branch while the PCE "non-Fast" core can be built with `make` in the `pce` branch.

## Documentation

https://docs.libretro.com/library/beetle_pce_fast/
