#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include<stddef.h>
void _putchar(int c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));



#endif

