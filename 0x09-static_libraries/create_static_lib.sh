#!/bin/bash

gcc -c -std=c11*.c
ar -rc liball.a *.o

