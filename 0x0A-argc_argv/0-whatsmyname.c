#include<stdio.h>

/**
* main - Entry point
* @argc: no of arguments
* @argv: array whose elments are the arguments
*
* Return: 0 if successful
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[(argc - argc)]);
	return (0);
}
