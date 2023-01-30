#include "lists.h"

/**
* free_listint - frees a linked list
* @head: pointer to the first node in the list
*
* Description: loops through the list and frees each node
* Return: no return value
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
