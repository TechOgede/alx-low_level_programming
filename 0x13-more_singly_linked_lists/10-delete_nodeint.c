#include "lists.h"

/**
* delete_nodeint_at_index - deletes a node at a specified index
* @head: pointer to a listint_t pointer
* @index: number specifying the position
*
* Description: loops throught the list. Has at prev node
* point to the node after the indexed node. Then, has the indexed node
* point to NULL.
*
* Return: 1 if successful, -1 if not
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *next, *prev, *node;

	prev = *head;

	if (!prev || !head)
		return (-1);

	if (index == 0)
	{
		*head = prev->next;
		free(prev);
		return (1);
	}

	for (i = 0; i < index - 1 && prev; i++)
	{
		prev = prev->next;
	}

	if (!prev || !(prev->next))
		return (-1);

	node = prev->next;

	next = node->next;
	prev->next = next;
	free(node);
	return (1);
}
