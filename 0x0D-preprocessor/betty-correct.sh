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
# remove leading spaces and tabs from each line
sed -i 's/^[ \t]*//' "$file"
# convert DOS-style line endings to Unix-style line endings
dos2unix "$file"
# add space after semicolons
sed -i 's/;/; /g' "$file"
betty "$file"