#!/usr/bin/env sh

gcc -Wall -O2 -DUSE_MMAP -DLITTLE_ENDIAN -D_DEBUG=1 -lm main.c pcm.c mod.c file.c
