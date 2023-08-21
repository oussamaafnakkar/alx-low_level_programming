#!/bin/bash

# Compile the .c files into a shared dynamic library
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c
gcc -shared -o liball.so *.o

# Clean up the object files
rm -f *.o
