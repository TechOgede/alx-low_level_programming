#include "lists.h"
#include<string.h>
/**
* add_node_end - adds a node at the end of a list
* @head: pointer to a list_t pointer
* @str: string to be used to create new node
*
* Description: dynamically allocates memory for a new node and
* has the next field of the tail set to the new node. Thereby
* becoming the tail.
* Return: the modified list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = NULL;

	temp = *head;

	if (!temp)
		temp = new_node;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (temp);

}
