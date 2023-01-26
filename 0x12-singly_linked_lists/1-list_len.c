#include "lists.h"

/**
* list_len - determines the no of elements in a linked list
* @h: a pointer to list_t list
*
* Description: loops through the linked list and prints its elements
* Return: unsigned int that denotes the number of nodes in the list.
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
