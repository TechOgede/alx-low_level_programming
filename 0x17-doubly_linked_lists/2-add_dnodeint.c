#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list
* @head: pointer to a dlistint_t pointer
* @n: int t initializse the int field with
*
* Description: allocates memory for a new node,'
* points its prev field to NULL,
* points its next field to the first node
* points the prev filed of the first node to the new node
* Return: the address of the new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;

	return (*head);
}
