#include "main.h"

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
	}
	return (sign * res);

}
