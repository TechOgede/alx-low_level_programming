#include "main.h"

/**
* get_bit - returns the bit at a positon specified by an index
* @n: the number
* @index: the index position
*
* Description: right shifts n by index. Then, bitwise AND 1
* Return: an int
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index) & 1;

	return (bit);
}
