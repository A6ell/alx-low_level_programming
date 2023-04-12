#!/bin/bash
# Run first script
./betty-correct.sh
# Run second script
./rm-trailing_whitespace.sh
betty "$file"

