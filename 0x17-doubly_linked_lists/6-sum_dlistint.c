#include "lists.h"

/**
* sum_dlistint - returns the sum of the ints in a doubly linked list
* @head: beginning of list
*
* Description: traverses the list and performs a running sum
* Return: an int denoting the sum
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h;
	int sum = 0;

	h = head;
	if (h)
	{
		while (h)
		{
			sum += h->n;
			h = h->next;
		}
	}

	return (sum);
}
