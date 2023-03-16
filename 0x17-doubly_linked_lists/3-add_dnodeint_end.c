#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @head: pointer to a dlistint_t pointer
* @n: int t initializse the int field with
*
* Description: allocates memory for a new node,
* points its next field to NULL
* traverses to the last node
* points the prev field of the new node to the last  node
* points the next field of the last node to the new node
* Return: the address of the new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *h;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	h = *head;
	if (h)
	{
		while (h->next)
			h = h->next;
		h->next = new_node;
		new_node->prev = h;
	}
	else
	{
		new_node->prev = NULL;
		*head = new_node;
	}

	return (new_node);
}
