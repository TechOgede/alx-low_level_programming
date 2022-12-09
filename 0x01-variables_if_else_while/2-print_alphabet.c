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

	str = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 26; i++)
	putchar(str[i]);
	putchar('\n')
	return (0);
}
