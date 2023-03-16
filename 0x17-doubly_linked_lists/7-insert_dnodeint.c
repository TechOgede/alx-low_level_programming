#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a specified index position
* @h: pointer to dlistint_t pointer
* @idx: index postion
* @n: int data to initialise n field of new node
*
* Description: calls custom functions to insert node at beginning and end
* for insertion at other positions, it traverses the list and keeps count
* of the postion.
* Return: the address of the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t pos = 0, len = 0;
	dlistint_t *head, *new_node;

	head = *h;

	if (!head)
		return (NULL);
	while (head)
	{
		head = head->next;
		len++;
	}
	if (idx >= len)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == len - 1)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	head = *h;
	while (head)
	{
		if (pos == idx - 1)
		{
			new_node->next = head->next;
			head->next = new_node;
			new_node->prev = head;
			if (new_node->next)
				new_node->next->prev = new_node;
		}
		head = head->next;
		pos++;
	}
	return (new_node);
}
