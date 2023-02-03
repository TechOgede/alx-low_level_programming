#include "main.h"

/**
* clear_bit - sets the bit at a given index to 0
* @n: pointer to an integer
* @index: int specifying the bit position to be changed
*
* Description: first creates a mask, then performs bitwise
* AND on n using ~mask. Then bitwise OR on the value using
* (0 << index)
* Return: 1 if successful, -1 if not
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;

	*n = ((*n & ~mask) | 0 << index);

	return (1);
}
