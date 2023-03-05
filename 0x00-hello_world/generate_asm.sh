#!/bin/bash

# Set the C file name
export CFILE=main.c

# Generate the assembly code using GCC
gcc -S -masm=intel "$CFILE" -o "${CFILE%.*}.s"

# Check if the assembly code was generated successfully
if [ $? -eq 0 ]; then
echo "Assembly code generated successfully!"
else
echo "Error generating assembly code!"
exit 1
fi

# Assemble and link the assembly code and execute the resulting binary
gcc "${CFILE%.*}.s" -o "${CFILE%.*}" && "./${CFILE%.*}"
