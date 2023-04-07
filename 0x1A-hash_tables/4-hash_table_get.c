#include "hash_tables.h"

/**
* hash_table_get - retrieves a value from an associated key in the hash table
* @ht: pointer to the hash table
* @key: key
*
* Description: calculates a hash, then an index. Then traverses the linked
* list at the index position.
* Return: string denoting the value or NULL if key could not be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	size_t index;

	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr)
	{
		if (strcmp(key, ptr->key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
