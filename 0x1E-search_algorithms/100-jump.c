#include "search_algos.h"
#include<math.h>

/**
* jump_search - Implementation of Jump Search Algo
* @array: array of ints
* @size: size of the array
* @value: value to be searched for
* Description: Jump search
* Return: Index of value or -1 if
* value is not present in array
*/

int jump_search(int *array, size_t size, int value)
{
	size_t m, i, k;

	if (!array)
		return (-1);

	m = sqrt(size);

	i = 0;

	while ((i * m) < size)
	{
		if (array[i * m] > value)
		{
			if (i == 0)
				k = 0;
			else
				k = (i - 1) * m;

			printf("Value found between indexes [%ld] and [%ld]\n", k, i * m);
			for (; k <= i * m; k++)
			{
				printf("Value checked array[%ld] = [%d]\n", k, array[k]);
				if (array[k] == value)
					return (k);
			}
		}

		else if (array[i * m] == value)
			return (i * m);
		else
			printf("Value checked array[%ld] = [%d]\n", i * m, array[i * m]);
		i++;
	}

	return (-1);
}
