#!/bin/bash

# creat s stitic lib
# creat a liball.a form *.c
# that are in the out directory

gcc -c -Wall -Werror -Wextra *.c
ar -rcs liball.a *.o
rm -rf *.o

