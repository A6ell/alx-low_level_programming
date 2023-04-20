#!/bin/bash

file=$1

sed -r -i 's/^\t+//g' "$file" # replace leading tabs with nothing
sed -r -i 's/^ +/\t/g' "$file" # replace remaining spaces with tabs

