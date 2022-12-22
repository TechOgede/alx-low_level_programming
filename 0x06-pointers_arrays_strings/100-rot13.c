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
	int i, count = 0;
	char *rot13 = s;
	char *k = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *r = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(s + count))
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == k[i])
			{	*(s + count) = r[i];
				break;
			}
		}
		count++;
	}
	return (rot13);

}
