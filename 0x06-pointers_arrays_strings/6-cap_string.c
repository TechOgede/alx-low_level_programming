#include "main.h"

/**
* cap_string - capitalizes words in a string
* @s: a string
*
* Description: checks if char after word delimiter is
* lowercase, then subtracts 32 from it.
* Return: returns the string
*/

char *cap_string(char *s)
{
	char *cap = s;
	int seps[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i;
	int count = 0;

	while (*(s + count) != '\0')
	{
		if (count == 0 && *(s + count) >= 97 && *(s + count) <= 122)
			*(s + count) -= 32;

		for (i = 0; i < 13; i++)
		{
			if (*(s + count) == seps[i])
			{
				if (*(s + (count + 1)) >= 97 && *(s + (count + 1)) <= 122)
				{
					*(s + (count + 1)) -= 32;
					break;
				}

			}

		}
		count++;
	}

	return (cap);
}
