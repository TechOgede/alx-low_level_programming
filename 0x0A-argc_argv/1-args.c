#include<stdio.h>

/**
* main - Entry point
* @argc: no of arguments
* @argv: array whose elments are the arguments
*
* Return: 0 if successful
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
