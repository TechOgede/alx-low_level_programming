#include "dog.h"

/**
* free_dog - frees data blocks allocated in creating dog_t
* @d: pointer to the struct dog_t
*
* Description: uses free() to free prev allocated memory
* Return: no return value
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
