#include "search_algos.h"


/**
* print_array - print elems in an array
* @array: array to be printed
* @low: beginning index of the array
* @high: last index of the array
* Description: prints each elem
*/

void print_array(int *array, int low, int high)
{
	int i;
	char *sep;

	sep = ", ";
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i == high)
			sep = "\n";
		printf("%d%s", array[i], sep);
	}
}

/**
* binary_search_util - helper function
* @array: array of ints
* @low: lowest index of the array
* @high: higest index
* @value: value to be searched for
* Description: Utility function. Called recursively
* Return: index where value is located, -1 if
* value is not present in the array
*/

int binary_search_util(int *array, int low, int high, int value)
{
	int mid;

	if (low > high)
		return (-1);

	print_array(array, low, high);
	mid = (low + high) / 2;

	if (array[mid] > value)
		return (binary_search_util(array, low, mid - 1, value));

	if (array[mid] < value)
		return (binary_search_util(array, mid + 1, high, value));

	return (mid);
}

/**
* exponential_search - implementation of expoonenetial search
* @array: array of ints
* @size: size of array
* @value: value to search for
* Description: performs binary search within a specified range
* Return: index of value r -1 if value isnt present
*/

int exponential_search(int *array, size_t size, int value)
{
	int i = 1, high;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < (int)size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (i >= (int)size)
		high = (int)size - 1;
	else
		high = i;
	printf("Value found between indexes [%d] and [%d]\n", i / 2, high);
	return (binary_search_util(array, i / 2, high, value));
}
