#include "main.h"

/**
* _strlen - returns the length of a string
* @s: a null termianted string
*
* Description: keeps a count while looping through a string and
* stops when the Null character is detected.
* Return: an integer denoting the number of characters in the string.
*/

int _strlen(char *s)
{
	int i = 1;

	while(*s++)
		i++;
	return (i);
}
