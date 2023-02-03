#include "main.h"

/**
* set_bit - sets the bit at a given index to 1
* @n: pointer to an integer
* @index: int specifying the bit position to be changed
*
* Description: first creates a mask, then performs bitwise
* AND on n using ~mask. Then bitwise OR on the value using
* (1 << index)
* Return: 1 if successful, -1 if not
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;

	*n = ((*n & ~mask) | mask);

	return (1);
}
