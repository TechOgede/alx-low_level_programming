#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<stdlib.h>

/**
* struct list_s
* @str: a string
* @len: length of string
* @next: pointer to the next node
*/

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);




#endif
