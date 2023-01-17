#include "dog.h"

/**
* new_dog - creates a new dog
* @name: dog's name
* @age: dog's age as a floating point number
* @owner: owner's name
*
* Description: dynamically allocates memory for new dog
* Return: pointer to the newly created struct dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, len_name = 0, len_owner = 0;
	char *name_cpy, *owner_cpy;

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL || !name || !owner)
		return (NULL);

	name_cpy = malloc(sizeof(char) * (len_name + 1));
	if (name_cpy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		name_cpy[i] = name[i];
	name_cpy[i] = '\0';

	owner_cpy = malloc(sizeof(char) * (len_owner + 1));
	if (owner_cpy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; owner[i]; i++)
		owner_cpy[i] = owner[i];
	owner_cpy[i] = '\0';

	new_dog->name = name_cpy;
	new_dog->age = age;
	new_dog->owner = owner_cpy;

	return (new_dog);
}
