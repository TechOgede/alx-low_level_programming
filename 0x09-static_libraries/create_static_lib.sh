#!/bin/bash
find . -type f -name *.c | gcc -c ; find . -type f -name *.o | ar rc liball.a
