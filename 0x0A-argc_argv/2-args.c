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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
