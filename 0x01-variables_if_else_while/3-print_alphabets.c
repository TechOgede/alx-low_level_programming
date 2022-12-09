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

	str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$";
	for (i = 0; i < 53; i++)
	putchar(str[i]);
	putchar('\n');

	return (0);
}
