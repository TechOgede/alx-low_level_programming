#include "function_pointers.h"

/**
* print_name - prints a string passed to it
* @name: string
* @f: call-back function
*
* Description: f is called back to print string
* Return: no return value
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
