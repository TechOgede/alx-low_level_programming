#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: (0) if successful
 */

int main(void)
{
	char ch;
	char *str;

	for (ch = 'a'; ch <= 'z'; ch++)
	str = putchar(ch);
	putchar(str);
	return (0);
}
