#include "search_algos.h"


/**
* interpolation_search_util - helper function
* @array: array of ints
* @low: lowest index of the array
* @high: higest index
* @value: value to be searched for
* Description: Utility function. Called recursively
* Return: index where value is located, -1 if
* value is not present in the array
*/

int interpolation_search_util(int *array, int low, int high, int value)
{
	int pos;

	pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));

	if (low > high)
		return (-1);
	if (value > array[high] || value < array[low])
	{
		printf("Value checked array[%d] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
	if (array[pos] > value)
		return (interpolation_search_util(array, low, pos - 1, value));

	if (array[pos] < value)
		return (interpolation_search_util(array, pos + 1, high, value));

	return (pos);
}

/**
* interpolation_search - Implements the interplation search algo
* @array: array of ints
* @size: size of the array
* @value: value to be searched for
* Description: Recursively splits the array in half and
* compares the middle elem with value
* Return: The index where value is located
* or -1 if value is not present in the array
*/

int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (interpolation_search_util(array, 0, (int)size - 1, value));
}
