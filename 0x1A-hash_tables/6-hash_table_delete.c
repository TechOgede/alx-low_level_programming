/**
* hash_table_delete - deletes a hash table
* @ht: pointer to the hash table
*
* Description: traverses the table and frees allocated memory
*/

void hash_table_delete(hash_table_t *ht)
{
	size_t i;
	hash_node_t *ptr, *temp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			temp = ptr;
			free(temp->key);
			free(temp->value);
			free(temp);
			ptr = ptr->next;
		}
	}
	free(ht->array);
	free(ht);
}
