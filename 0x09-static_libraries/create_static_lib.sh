#!/bin/bash

# creat s stitic lib
# creat a liball.a form *.c    
# that are in the out directory

gcc -c *.c
ar rc liball.a *.o
echo y | rm -I *.o
