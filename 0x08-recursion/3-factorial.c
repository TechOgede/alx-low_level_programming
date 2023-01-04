#include "main.h"

/**
* factorial - calculates the factorial of n using recursion
* @n: a positive integer
*
* Description: recursively called to calculate factorial
* Return: an integer
*/

int factorial(int n)
{

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}
