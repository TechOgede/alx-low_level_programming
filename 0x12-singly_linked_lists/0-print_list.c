#include "lists.h"

/**
* print_list - prints all the elements of a list_t
* @h: a pointer to list_t list
*
* Description: loops through the linked list and prints its elements
* Return: unsigned int that denotes the number of nodes in the list.
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{	if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		i++;
		h = h->next;
	}

	return (i);
}
