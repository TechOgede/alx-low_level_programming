#include "function_pointers.h"

/**
* int_index - searches an array for an integer
* @array: an array
* @size: num of elements in the array
* @cmp: call-back func
*
* Description: calls cmp on each element of the array
* Return: index of first element for which cmp doesnt return 0
* -1 if no match or size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{		
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
}
