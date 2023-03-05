#!/bin/bash

# Set the C file name
CFILE="100-intel"

# Generate the assembly code using GCC
gcc -S -masm=intel "$CFILE.c" -o "$CFILE.s"

# Check if the assembly code was generated successfully
if [ $? -eq 0 ]; then
echo "Assembly code generated successfully!"
else
echo "Error generating assembly code!"
fi
