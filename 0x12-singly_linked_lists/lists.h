#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<stdlib.h>

/**
* struct list_s  - a node in a singly linked list
* @str: a string
* @len: length of string
* @next: pointer to the next node
*
* Description: struct containing three fields
* typedef to list_t
*/

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);



#endif
