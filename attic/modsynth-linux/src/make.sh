#!/usr/bin/env sh

gcc -Wall -O2 -DUSE_MMAP -DLITTLE_ENDIAN -D_DEBUG=0 main.c pcm.c mod.c file.c
