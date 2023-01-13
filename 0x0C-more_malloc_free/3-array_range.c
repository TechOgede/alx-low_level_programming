#include "main.h"

/**
* array_range - prints an array of ints withing a specfied range
* @min: the lower end of the range
* @max: the upper end of the range
*
* Description: dynamically allocates memory and
* sets an incremental loop
* Return: a pointer to the new array
*/

int *array_range(int min, int max)
{
	int *array;
	int i, num_ints;

	if (min > max)
		return (NULL);

	num_ints = (max - min) + 1;

	array = malloc(sizeof(int) * num_ints);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < num_ints; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
