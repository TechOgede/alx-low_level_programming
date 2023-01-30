#include "lists.h"

/**
* print_listint - prints the elements of a listint_t list
* @h: a pointer the the first node in the list
*
* Description: uses a loop to go through the list and printf
* to print each int member of every node.
* Return: an int that denotes the number of nodes in the list.
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			i++;
			h = h->next;
		}
		return (i);
	}
	return (0);

}
