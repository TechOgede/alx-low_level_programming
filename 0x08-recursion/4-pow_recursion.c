#include "main.h"

/**
* _pow_recursion - calcuates the value of x to the power of y
* using recursion
* @x: an integer
* @y: a positive integer
*
* Description: uses recursive calls to calculate the new value of x
* Return: an integer
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
