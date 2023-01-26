#include "lists.h"

/**
* free_list - frees a linked list
* @head: pointer to the start of list
*
* Description: frees each element of the list
* Return: no return value
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
