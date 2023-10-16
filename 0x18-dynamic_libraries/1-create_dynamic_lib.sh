#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc -fPIC -shared *.c -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
