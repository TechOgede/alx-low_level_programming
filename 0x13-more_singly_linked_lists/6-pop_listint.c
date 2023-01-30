#include "lists.h"

/**
* pop_listint - deletes the head node
* @head: pointer to listint_t pointer
*
* Description: sets the second node as the head and
* frees the first node
* Return: an int thats in the n field of the node
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head)
	{
		temp = *head;
		n = temp->n;
		*head = (*head)->next;
		free(temp);

		return (n);
	}

	return (0);
}
