#include "lists.h"

/**
* delete_dnodeint_at_index - deletes a new node at a specified index position
* @h: pointer to dlistint_t pointer
* @index: index postion
*
* Description: traverses the list and to located the desired node.
* Then, adjust links and free the node
* Return: 1 if successful, -1 otherwise
*/

int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	size_t pos = 0;
	dlistint_t *head, *temp;

	head = *h;
	if (!head)
		return (-1);
	head = *h;
	if (index == 0)
	{
		*h = head->next;
		if (*h)
			(*h)->prev = NULL;
		free(head);
		return (1);
	}
	while (head)
	{
		if (pos == index)
		{
			if (head->next)
			{
				temp->next = head->next;
				head->next->prev = temp;
			}
			else
			{
				temp->next = NULL;
				head->prev = NULL;
				free(head);
				return (1);
			}
			free(temp);
			return (1);
		}
		temp = head;
		head = head->next;
		pos++;
	}
	return (-1);
}
