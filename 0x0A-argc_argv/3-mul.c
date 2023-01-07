#include<stdio.h>
#include<stdlib.h>

/**
* main - Entry point
* @argc: no of arguments
* @argv: array whose elments are the arguments
*
* Return: 0 if successful
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");

	return (0);
}
