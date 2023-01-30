#include "lists.h"

/**
* listint_len - calculates the # of nodes in a listint_t list
* @h: a pointer the the first node in the list
*
* Description: uses a loop to go through the list and increments
* a counter for each node
* Return: an int that denotes the number of nodes in the list.
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h)
	{
		while (h)
		{
			i++;
			h = h->next;
		}
		return (i);
	}
	return (0);

}
