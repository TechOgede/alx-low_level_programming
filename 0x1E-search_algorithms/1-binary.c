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
* binary_search - Implements the binary search algo
* @array: array of ints
* @size: size of the array
* @value: value to be searched for
* Description: Recursively splits the array in half and
* compares the middle elem with value
* Return: The index where value is located
* or -1 if value is not present in the array
*/

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_search_util(array, 0, (int)size - 1, value));
}
