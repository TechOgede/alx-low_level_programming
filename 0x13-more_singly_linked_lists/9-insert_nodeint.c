#include "lists.h"

/**
* insert_nodeint_at_index - creates and adds
* a new node at an index position
* @head: pointer to listint_t pointer
* @idx: index position the new node should be added
* @n: int value  to be added to the n field of the node
*
* Description: create a new node using malloc.
* loop through the list up to the index posision and
* have the prev node point to the new node. The have the new node
* point to the node that was at the index poisiton.
* Return: pointer to the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp, *prev;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = *head;

	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (temp)
	{
		count++;
		prev = temp;
		if (count == idx)
		{
			new_node->next = prev->next;
			prev->next = new_node;
			return (new_node);
		}
		temp = temp->next;
	}
	return (NULL);
}
