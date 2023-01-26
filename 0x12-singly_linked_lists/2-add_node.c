#include "lists.h"
#include<string.h>
/**
* add_node - adds a node at the beginning of a list
* @head: pointer to a list_t pointer
* @str: string to be used to create new node
*
* Description: dynamically allocates memory for a new node and 
* has its next field point to the 'head' of the list. Thereby
* becoming the head.
* Return: the modified list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->len = strlen(str);
	new_node->str = strdup(str);

	new_node->next = *head;
	*head = new_node;

	return (*head);

}
