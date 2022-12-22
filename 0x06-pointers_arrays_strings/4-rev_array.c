#include "main.h"

/**
* reverse_array - reverses the content of an array
* @a: an array of integers
* @n: number of elements in the array
*
* Description: Loops through an array and swaps
* elements from first to last and vice versa
* Return: no return value
*/

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[--n];
		a[n] = tmp;
	}
}
