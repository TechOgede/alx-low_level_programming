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
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{	printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	

	}
	if (argc != 1)
		printf("%d\n", sum);
	return (0);
}
