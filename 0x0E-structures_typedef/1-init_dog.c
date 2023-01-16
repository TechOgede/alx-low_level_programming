#include "dog.h"

/**
* init_dog - initializes the fields of struct dog
* @d: pointer to struct dog
* @name: string denoting dog's name
* @age: dog's age as a floating point num
* @owner: owner's name
*
* Description: sets each field using -> operator
* Return: no return value
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;

}
