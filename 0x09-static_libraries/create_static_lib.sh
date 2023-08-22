#!/bin/bash
ls *.c
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
ls *.o
ar -rcs liball.a *.o
ls *.a

