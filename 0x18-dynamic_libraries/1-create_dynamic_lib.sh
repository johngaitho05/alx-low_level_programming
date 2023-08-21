#!/bin/bash

# Find all .c files in the current directory
files=$(find . -name "*.c")

# Compile the .c files into object files
for file in $files
do
    gcc -Wall -pedantic -Werror -Wextra -c $file
done

# Create the library file
gcc -Wall -pedantic -Werror -Wextra *.o -shared -o liball.so

# Clean up the object files
rm *.o
