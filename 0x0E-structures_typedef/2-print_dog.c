#include "dog.h"

/**
* print_dog - displays the fields and values of struct dog
* @d: a pointer to a struct dog variable
*
* Description: uses -> operator to access fields and its values
* Return: no return value
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
