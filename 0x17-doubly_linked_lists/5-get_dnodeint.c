#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node specified by an index
* @head: beginning of the list
* @index: int starting from zero. Denotes index position of nodes
*
* Description: Traverses the list and increments a counter.
* Returns the node at which counter equals index
* Return: pointer to the node at index position
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t pos = 0, len = 0;
	dlistint_t *h;

	h = head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (index >= len)
		return (NULL);
	h = head;
	while (h)
	{
		if (pos == index)
			return (h);
		h = h->next;
		pos++;
	}
	return (NULL);

}
