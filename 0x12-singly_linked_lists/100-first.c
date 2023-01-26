#include "lists.h"

/**
* before_main - function to be execured before main is called
*
* Description: prints two senteces to stdout
* Return: no return value
*/


__attribute__((constructor))void foo(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
