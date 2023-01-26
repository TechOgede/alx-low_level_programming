#include "lists.h"

/**
* before_main - function to be execured before main is called
*
* Description: prints two senteces to stdout
* Return: no return value
*/


__attribute__((constructor))void foo(void)
{
	printf("You're beat, yet you must allow,\nI bore my house upon my back\n");
}
