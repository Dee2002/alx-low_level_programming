#!/bin/bash

# Compile all .c files in the current directory into a dynamic library named liball.so
gcc -fPIC -shared -o liball.so *.c

# Display the symbols in the library using the nm command
nm -D --defined-only liball.so
