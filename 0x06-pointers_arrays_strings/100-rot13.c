#include "main.h"

/**
* rot13 - encodes a string using rot13
* @s: string to be encoded
*
* Description: encodes alphabett chars by increasing value by 13
* Return: returns the encoded string
*/

char *rot13(char *s)
{
	int count = 0;
	char *rot13 = s;

	while (*(s + count) != '\0')
	{
		if (*(s + count) >= 65 && *(s + count) <= 122)
		{
			if ((*(s + count) >= 65 && *(s + count) <=  78) || (*(s + count) >= 97 && *(s + count) <= 110))
				*(s + count) += 13;
			else
				*(s + count) -= 13;
		}
	}
	return (rot13);

}
