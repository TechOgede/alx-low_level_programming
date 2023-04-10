#include "hash_tables.h"

/**
* shash_table_create - creates a sorted hash table
* @size: int denoting the size of the array
*
* Description: dynmaically allocates memory for an array of linked list heads
* Also creates another linked list in which elems are sorted by key
* according to ASCII values
* Return: a pointer to the hash table
*/

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table;
	shash_node_t **shash_node_array;
	size_t i;

	shash_table = malloc(sizeof(shash_table_t));
	if (!shash_table)
		return (NULL);
	shash_node_array = malloc(sizeof(shash_node_t *) * size);
	if (!shash_node_array)
	{
		free(shash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		shash_node_array[i] = NULL;
	shash_table->size = size;
	shash_table->array = shash_node_array;
	shash_table->shead = NULL;
	shash_table->stail = NULL;

	return (shash_table);
}

/**
* get_ascii - calcuates the ascii value of a string
* @str: the string argument
*
* Description: sums up the ascii value for each char in a string
* Return: an int
*/

int get_ascii(char *str)
{
	int i, sum = 0;

	for (i = 0; str[i]; i++)
		sum += str[i];

	return (sum);
}

/**
* shash_table_insert - adds nodes to the sorted linked list in the hash table
* @ht: pointer to hash table
* @new_node: elem to be inserted
*
* Description: Inserts elem anywhere in a linked list sorted according
* to ASCII value of key
*/

void shash_table_insert(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *ptr;


	ptr = ht->shead;
	if (!ptr)
	{
		ht->shead = ht->stail = new_node;
		return;
	}
	if (get_ascii(ptr->key) > get_ascii(new_node->key))
	{
		ptr->sprev = new_node;
		new_node->snext = ptr;
		ht->shead = new_node;
		return;
	}
	if (get_ascii((ht->stail)->key) < get_ascii(new_node->key))
	{
		(ht->stail)->snext = new_node;
		new_node->sprev = (ht->stail);
		ht->stail = new_node;
		return;
	}
	while (ptr && get_ascii(ptr->key) < get_ascii(new_node->key))
		ptr = ptr->snext;

	(ptr->sprev)->snext = new_node;
	new_node->sprev = ptr->sprev;
	new_node->snext = ptr;
	ptr->sprev = new_node;
	return;

}
/**
* shash_table_set - addds an element to the sorted hashtable
* @ht: pointer to the hash table
* @key: key to be added
* @value: value to be added
*
* Description: Calcuates the hash and then the index.
* Inserts the element at that index position
* Also places the new elem at the appropriate pos in the sorted linked list
* Return: 1 if successful, 0 otherwise
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	size_t index;
	shash_node_t *new_node, *ptr;

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
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	new_node->snext = new_node->sprev = NULL;
	ht->array[index] = new_node;

	shash_table_insert(ht, new_node);
	return (1);
}

/**
* shash_table_get - retrieves a value from an associated
* key in the sorted hash table
* @ht: pointer to the hash table
* @key: key
*
* Description: calculates a hash, then an index. Then traverses the linked
* list at the index position.
* Return: string denoting the value or NULL if key could not be found
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *ptr;

	if (!ht)
		return (NULL);
	ptr = ht->shead;
	while (ptr)
	{
		if (strcmp(key, ptr->key) == 0)
			return (ptr->value);
		ptr = ptr->snext;
	}
	return (NULL);
}

/**
* shash_table_print - prints the sorted hash table
* @ht: pointer to the hash table
*
* Description: prints the k/v pairs in a sorted order
*/

void shash_table_print(const shash_table_t *ht)
{
	char *sep;
	shash_node_t *ptr;

	if (!ht)
		return;

	printf("{");
	sep = "";
	ptr = ht->shead;
	while (ptr)
	{
		printf("%s'%s': '%s'", sep, ptr->key, ptr->value);
		sep = ", ";
		ptr = ptr->snext;
	}
	printf("}\n");
}

/**
* shash_table_delete - deletes a sorted hash table
* @ht: pointer to the hash table
*
* Description: traverses the table and frees allocated memory
*/

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *ptr, *temp;

	if (!ht)
		return;
	ptr = ht->shead;
	while (ptr)
	{
		temp = ptr;
		free(temp->key);
		free(temp->value);
		free(temp);
		ptr = ptr->snext;
	}
	free(ht->array);
	free(ht);
}

/**
* shash_table_print_rev - prints the sorted hash table in reverse
* @ht: pointer to the hash table
*
* Description: prints the k/v pairs in a reverse sorted order
*/

void shash_table_print_rev(const shash_table_t *ht)
{
	char *sep;
	shash_node_t *ptr;

	if (!ht)
		return;

	printf("{");
	sep = "";
	ptr = ht->stail;
	while (ptr)
	{
		printf("%s'%s': '%s'", sep, ptr->key, ptr->value);
		sep = ", ";
		ptr = ptr->sprev;
	}
	printf("}\n");
}
