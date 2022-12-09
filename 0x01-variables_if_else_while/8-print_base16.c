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

	str = "0123456789abcdef";
	for (i = 0; i < 16; i++)
	putchar(str[i]);
	putchar('\n');
	return (0);
}
