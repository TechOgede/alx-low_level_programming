#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int _atoi(char *str);
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
		if (_atoi(argv[i]) == INT_MIN)
		{	printf("Error\n");
			return (1);
		}

		sum += _atoi(argv[i]);
	

	}
	if (argc != 1)
		printf("%d\n", sum);
	return (0);
}

/**
* _atoi - converts a string to an integer
* @str: string to be converted
*
* Description: converts strings of numbers to int. Even accepts the 
* prceding + or -
* Return: returns the integer if successful. 0 otherwise
*/

int _atoi(char *str)
{
	int res = 0, i, sign = 1;

	if (str[0] == '-')
		sign = -1;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] >= 48 && str[i] <= 57)
		res = res * 10 + str[i] - '0';
		else
			return (INT_MIN);
	}
	return (sign * res);

}
