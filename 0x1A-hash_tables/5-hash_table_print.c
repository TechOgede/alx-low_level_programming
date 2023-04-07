#include "hash_tables.h"

/**
* hash_table_print - prints the hash table
* @ht: pointer to the hash table
*
* Description: prints the k/v pairs in the order they appear in the array
*/

void hash_table_print(const hash_table_t *ht)
{
	char *sep;
	hash_node_t *ptr;
	size_t i;

	if (!ht)
		return;

	printf("{");
	sep = "";
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			printf("%s'%s': '%s'", sep, ptr->key, ptr->value);
			sep = ", ";
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
