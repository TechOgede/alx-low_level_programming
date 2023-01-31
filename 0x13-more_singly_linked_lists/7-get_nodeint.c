#include "lists.h"

/**
* get_nodeint_at_index - selects and returns a node in a list.
* The node is specified by an index
* @head: a pointer to the first node
* @index: an int starting from 0
*
* Description: goes through the list up to the specified index,
* detaches the needed node (by setting its next field to null)
* Return: a pointer to the node at the index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index && head; i++)
	{
		head = head->next;
	}
	return (head);
}
