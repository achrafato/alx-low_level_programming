#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c

# Create the static library from the object files & Index the library
ar -rcs liball.a *.o
