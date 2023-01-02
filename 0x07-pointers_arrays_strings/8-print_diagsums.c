#include "main.h"

/**
* print_diagsums - print the sum of two diagonals of a square matrix
* @a: the array of arrays
* size: the size of the square array
*
* Description: the diagonals of a square matrix are a[i][j]
* where i = j
* Return: no return value
*/

void print_diagsums(int *a, int size)
{
	int i, sum_left = 0, sum_right = 0, max = size * size;

	for (i = 0; i < max; i += size + 1)
	{
		sum_right += a[i];

	}

	for (i = 0; i < max - 1; i += size - 1)
		sum_left += a[i];
	
	printf("%d %d\n", sum_right, sum_left);
}
