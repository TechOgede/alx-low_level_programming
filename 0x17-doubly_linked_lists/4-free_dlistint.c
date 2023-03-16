#include "lists.h"

/**
* free_dlistint - frees a douby linked list
* @head: pointer to first node in the list
*
* Description: traverses each node in the list and free it
* Return: no return value
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *h, *temp;

	h = head;

	while (h)
	{
		temp = h;
		h = h->next;
		free(temp);
	}
}
