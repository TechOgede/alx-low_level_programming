#include "main.h"

/**
* print_array - prints the n elements of an array
* @a: an array
* @n: a positive integer
*
* Description: uses printf to display elements
* Return: no return value
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", *(a + i));
		}
		else
			printf("%d", *(a + i));
	}
	printf("\n");
}
