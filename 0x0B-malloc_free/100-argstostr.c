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
	int *args_len, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	args_len = malloc(sizeof(int) * ac);

	for (i = 0; i < ac; i++)
	{
		args_len[i] = strlen(av[i]);
	}

	for (i = 0; i < ac; i++)
	{
		total_len += args_len[i];
	}

	str = malloc(sizeof(char) * (total_len + 1));

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < args_len[i]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
	str[k] = '\n';
	k++;
	}
	free(args_len);

	return (str);

}
