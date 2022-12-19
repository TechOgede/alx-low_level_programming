#include "main.h"

/**
* swap_int - swaps the values in int variables a and b
* @a: address of an integer a
* @b: address of an integer b
*
* Description: uses pointers to swap values
* Return: no return value
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;



}
