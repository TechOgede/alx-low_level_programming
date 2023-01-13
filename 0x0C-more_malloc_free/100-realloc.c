#include "main.h"

/**
* _realloc - reallocate block of memory prev allocated
* by malloc
* @ptr: the pointer returned by malloc
* @old_size: original size of memory returned by malloc
* @new_size: size to be reallocated to
*
* Descripton: dynamically allocates a block and copies
* the contents of the earlier block into it up to
* old_size or new_size, whichever is lesser
* Return: returns a pointer to the new block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_mem;
	unsigned int i;
	char *new_ptr;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = ptr;

	new_mem = malloc(new_size);

	if (new_mem == NULL)
		return (NULL);

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_mem[i] = new_ptr[i];

		return (new_mem);
	}

	for (i = 0; i < old_size; i++)
		new_mem[i] = new_ptr[i];
	return (new_mem);
}
