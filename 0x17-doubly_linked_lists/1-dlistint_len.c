#include "lists.h"

/**
* dlistint_len - returns the num of elements of a doubly linked list
* @h: head of the list
*
* Description: loops through the nodes and increments a counter
* Return: int denoting the number of nodes in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
