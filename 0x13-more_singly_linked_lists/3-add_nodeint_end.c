#include "lists.h"

/**
* add_nodeint_end - creates a new node and positions it
* at the end of the list
* @head: pointer to a listint_t pointer
* @n: int to be placed in the n field of the new node
* Description: calls malloc and initializes the fields of
* the new node with its next field pointing to NULL
* Sets the last node's next field to point to the new node
*
* Return: a pointer to the modified list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
