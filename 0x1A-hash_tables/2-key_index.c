#include "hash_tables.h"

/**
* key_index - returns the index postion to insert the
* k/v pair in the hash table
* @key: string denoting key
* @size: size of the array
*
* Description: Determines index by calculating: hash % size
* Return: an integer denoting index pos
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
