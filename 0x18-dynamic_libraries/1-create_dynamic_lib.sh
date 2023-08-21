#!/bin/bash

gcc -fPIC -c *.c
gcc -shared -o liball.so *.o

# Clean up the object files
rm -f *.o
