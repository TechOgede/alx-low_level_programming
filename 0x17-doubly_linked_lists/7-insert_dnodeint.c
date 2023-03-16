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
	size_t pos = 1;
	dlistint_t *head, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	head = *h;
	while (head)
	{
		if (pos == idx)
		{
			if (!head->next)
				return (add_dnodeint_end(h, n));

			new_node = malloc(sizeof(dlistint_t));
			if (!new_node)
				return (NULL);
			new_node->n = n;
			new_node->next = head->next;
			new_node->prev = head;
			head->next->prev = new_node;
			head->next = new_node;
			return (new_node);
			}
		}
		head = head->next;
		pos++;
	}
	return (NULL);
}
