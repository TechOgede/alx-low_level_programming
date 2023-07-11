#include "search_algos.h"

/**
* linear_search - Implements the linear search algorithm
* @array: an array of ints
* @size: size of the array
* @value: value to search for
*
* Description: Compares each elem  in the array in a linear fashion
* Return: The first index wherer value is located or
* -1 if value is not present
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
