#!/bin/bash
if gcc -fPIC -c *.c; then
    echo "Compilation successful."
else
    echo "Error: Compilation failed."
    exit 1
fi
if gcc -shared -o liball.so *.o; then
    echo "Dynamic library created: liball.so"
else
    echo "Error: Failed to create dynamic library."
    exit 1
fi
