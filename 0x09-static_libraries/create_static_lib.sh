#!/bin/bash
gcc -wall -pendantic -werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
