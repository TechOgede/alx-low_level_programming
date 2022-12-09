#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: (0) if successful
 */

int main(void)
{
	int i;
	char *str;

	str = "0123456789";
	for (i = 0; i < 10; i++)
	{
		putchar(str[i]);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
