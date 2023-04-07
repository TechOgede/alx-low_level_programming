#include "hash_tables.h"

/**
* hash_table_set - addds an element to the hashtable
* @ht: pointer to the hash table
* @key: key to be added
* @value: value to be added
*
* Description: Calcuates the hash and then the index.
* Inserts the element at that index position
* Return: 1 if successful, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t index;
	hash_node_t *new_node, *ptr;

	if (ht == NULL || strlen(key) == 0 || key == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr)
	{
		if (strcmp(key, ptr->key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (1);
		}
		ptr = ptr->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
