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
# remove trailing whitespace from each line
sed -i 's/[[:space:]]\+$//' "$file"
betty "$file"