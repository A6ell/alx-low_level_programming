#!/bin/bash

if [[ $# -ne 1 ]]; then
  echo "Usage: $0 filename"
  exit 1
fi

filename=$1

# Check if the file is missing a newline character at the end
if [[ "$(tail -c 1 "$filename")" != "" ]]; then
  # Append a newline character to the end of the file
  echo >> "$filename"
fi