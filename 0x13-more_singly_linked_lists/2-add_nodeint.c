#include "lists.h"

/**
* add_nodeint - creates a new node and positions it
* at the beginning of the list
* @head: pointer to a listint_t pointer
* @n: int to be placed in the n field of the new node
* Description: calls malloc and initializes the fields of
* the new node with its next field pointing to the list
* Return: a pointer to the modified list
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
