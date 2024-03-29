#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list
* @head: pointer to a listint_t pointer
*
* Description: Loops through the list and has each
* node point to the prev one, but the first node points to NULL
* Then, head is set to point to the last node
* Return: a pointer to the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		(*head) = next;
	}
	*head = prev;
	return (*head);

}

