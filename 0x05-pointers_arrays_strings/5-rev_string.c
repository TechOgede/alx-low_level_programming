#include "main.h"
#include<string.h>

/**
* rev_string - reverses a string
* @s: a null termianted string
*
* Description: reverses a string in state
* stops when the Null character is detected.
* Return: no return value
*/

void rev_string(char *s)
{
	int len = strlen(s);
	char tmp;
	int i;

	for (i = 0; i < len; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + (len--));
		*(s + len) = tmp;
	}
}
