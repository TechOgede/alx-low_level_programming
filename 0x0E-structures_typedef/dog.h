#ifndef DOG_H
#define DOG_H
#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
/**
* struct dog - Dog data
* @name: dog's name
* @age: dog's age
* @owner: dog's owner's name
*
* Description: contains 3 data fields
*/

typedef struct dog
{
	char *name;
	double age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

