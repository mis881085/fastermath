# -*- makefile -*-
# configuration for Linux 32-bit x86 with GCC using the regular FPU
CC=gcc -m32
CPPFLAGS=
ARCHFLAGS= -march=i686 -mfpmath=387 -mpc64 -g
GENFLAGS=  -falign-functions=16 -fPIC -fno-builtin
OPTFLAGS=  -O3 -ffast-math -fexpensive-optimizations
WARNFLAGS= -Wall -W

LD=$(CC)
LDFLAGS=   -shared
LDLIBS=
TESTLIBS=  -lrt -lm