#include "lists.h"

/**
* print_dlistint - prints the elements of a doubly linked list
* @h: head of the list
*
* Description: loops through the nodes and prints the int data of each
* Return: int denoting the number of nodes in the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
