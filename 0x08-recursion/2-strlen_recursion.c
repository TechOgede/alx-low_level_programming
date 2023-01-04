#include "main.h"

/**
* _strlen_recursion - similar to strlen() but works recursively
* @s: string to display
*
* Description: recursively called to calculate the length of a string
* Return: a positive integer
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		return (count + _strlen_recursion(s + 1));
	}
	return (0);

}
