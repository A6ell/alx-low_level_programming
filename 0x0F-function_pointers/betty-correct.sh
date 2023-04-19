#!/bin/bash

if [[ $# -eq 0 ]]; then
  echo "Usage: $0 file"
  exit 1
fi

file="$1"

if [[ ! -f "$file" ]]; then
  echo "$file is not a file"
  exit 1
fi





if [[ $# -ne 1 ]]; then
  echo "Usage: $0 filename"
  exit 1
fi

filename=$1

# Check if the file is missing a newline character at the end





# remove leading spaces and tabs from each line
sed -i 's/^[ \t]*//' "$file"
# convert DOS-style line endings to Unix-style line endings
dos2unix "$file"
# add space after semicolons
sed -i 's/;/; /g' "$file"
betty "$file"
if [[ "$(tail -c 1 "$filename")" != "" ]]; then
  # Append a newline character to the end of the file
  echo >> "$filename"
fi