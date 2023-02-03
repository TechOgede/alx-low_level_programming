#include "main.h"

/**
* flip_bits - calculates the number of bits to be flipped
* to change from one number to another
* @n: first number
* @m: second number
*
* Description: calculates the number of set bits in n ^ m
* Return: int value that is a count of set bits i n ^ m
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, nXORm;

	nXORm = n ^ m;

	while (nXORm)
	{
		count++;
		nXORm &= (nXORm - 1);
	}
	return (count);
}
