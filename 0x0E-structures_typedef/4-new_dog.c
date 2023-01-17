#include "dog.h"
#include<string.h>

void init_block(char *block, char *str);
void init_struct(dog_t *d, char *str1, char *str2, float num);
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
	int len_name, len_owner;
	char *name_cpy, *owner_cpy;

	len_name = strlen(name);
	len_owner = strlen(owner);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL || name == NULL || owner == NULL)
		return (NULL);
	name_cpy = malloc(sizeof(char) * (len_name + 1));
	if (name_cpy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	init_block(name_cpy, name);
	owner_cpy = malloc(sizeof(char) * (len_owner + 1));
	if (owner_cpy == NULL)
	{
		free(name_cpy);
		free(new_dog);
		return (NULL);
	}
	init_block(owner_cpy, owner);
	init_struct(new_dog, name_cpy, owner_cpy, age);
	return (new_dog);
}
/**
* init_block - initializes the block allocated for a string
* @block: pointer to newly allocated block of memory
* @str: string to be copied inot the new block of memory
*
* Description: loops through both the block and string
* initializing each unit
* Return: no return value
*/

void init_block(char *block, char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		block[i] = str[i];
	block[i] = '\0';

}
/**
* init_struct - initializes the fields of a dog_t struct
* @d: pointer to the newly allocated dog_t
* @str1: name of the dog
* @str2: name of owner
* @num: dog's age
*
* Decription: uses the -> operator to set fields
* Return: no return value
*/

void init_struct(dog_t *d, char *str1, char *str2, float num)
{
	d->name = str1;
	d->age = num;
	d->owner = str2;
}
