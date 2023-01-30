#include "lists.h"

/**
* free_listint2 - frees a linked list and sets head to NULL
* @head: pointer to the first node in the list
*
* Description: loops through the list and frees each node
* Return: no return value
*/

void free_listint2(listint_t **head)
{
	listint_t *temp, *hold;

	if (head)
	{
		hold = *head;
		while (hold)
		{
			temp = hold->next;
			free(hold);
			hold = temp;
		}
		*head = NULL;
	}
}
