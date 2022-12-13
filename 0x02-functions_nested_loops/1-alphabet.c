#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}

/**
 * print_alphabet - print the letter in lowercase
 *
 * Description: uses putchar to print the alphabet in lowercase
 * Return: Has no return value
 */

void print_alphabet(void)
{	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		putchar(ch);
	}
}
