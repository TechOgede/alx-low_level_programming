#include "main.h"

/**
* set_string - sets the value of a pointer to a char
* @s: a pointer to the pointer that points to the
* first char in a string
*
* Description: deferemces s sets it point to another string
$ Return: no return value
*/

void set_string(char **s, char *to)
{
	*s = to;
}
