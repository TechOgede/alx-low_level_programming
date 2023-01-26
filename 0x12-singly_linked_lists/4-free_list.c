#include "lists.h"

/**
* free_list - frees a linked list
* @head: pointer to the start of list
*
* Description: frees each element of the list
* Return: no return value
*/

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head);
	}
	return;
}
