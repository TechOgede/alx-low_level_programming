#include "function_pointers.h"

/**
* array_iterator - passes each element of an array to a function
* @size: size of the array
* @action: the function which each element is passed to
*
* Description: loops through the array and calls 'action' on each element
* Return: no return value
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
