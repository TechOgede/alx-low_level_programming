#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: (0) if successful
 */

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i < j && (i != '8' && j != '9')
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
