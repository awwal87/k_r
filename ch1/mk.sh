#!/bin/bash

# program usage 
# 1. mk filename.c: will create binary named filename, put in bin/ 
# (obviously will create bin/ first if it doesn't already exist in current directory), 
# and run binary)
# 2. mk -b filename.c: do the same thing as above, 
# but won't run the program; it'll only create binary and store in bin/


# check if a filename was provided
if [ -z "$1" ]; then
	echo "Usage: $0 <sourceFile.c> [output_directory]"
	exit 1
fi

# check mode 
if [ $1 == -b ]; then
	RUN=1 # my working assumption is that this is how variables
		  # are declared in bash
fi

SRC="$1"
OUT_DIR="${2:-bin}" # default to 'bin' folder if not specified

# check if source file exists
if [ ! -f "$SRC" ]; then
	echo "Error: Source file '$SRC' not found"
	exit 1
fi

# create the output directory if it doesn't exist
mkdir -p "$OUT_DIR"

# get the basename of the file without the .c extension
BASENAME=$(basename "$SRC" .c)
OUTPUT="$OUT_DIR/$BASENAME"

# compile the C file using gcc
gcc -Wall -Wextra -o "$OUTPUT" "$SRC"

if [ $eq -eq 0 ] || [ $? -eq 0 ]; then
	echo "Successfully built '$SRC' -> '$OUTPUT'"
else
	echo "Compilation failed."
	exit 1
fi

# run the file
./$OUTPUT
