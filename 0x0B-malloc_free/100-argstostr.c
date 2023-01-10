#include "main.h"
#include<string.h>

/**
* argstostr - concatenates args to main to form a new string
* @ac: integer denoting the number of args
* @av: an array of the arguments
*
* Description: loops through each arg and concatenates them
* Return: a pointer to the new string
*/

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int args_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			args_len++;
		}
		args_len++;
	}
	args_len++;

	str = malloc(sizeof(char) * args_len);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
	str[k] = '\n';
	k++;
	}
	str[k] = '\0';

	return (str);

}
