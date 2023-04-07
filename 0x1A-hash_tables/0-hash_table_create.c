#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: int denoting the size of the array
*
* Description: dynmaically allocates memory for an array of linked list heads
* Return: a pointer to the hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **hash_node_array;
	size_t i;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);
	hash_node_array = malloc(sizeof(hash_node_t *) * size);
	if (!hash_node_array)
	{
		free(hash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hash_node_array[i] = NULL;
	hash_table->size = size;
	hash_table->array = hash_node_array;

	return (hash_table);
}

