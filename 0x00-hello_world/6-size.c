#include<stdio.h>
/**
 * main - vehicle for all programs in C
 *
 * Description: C requires that all programs be
 * run in a main function.
 * Return: 0 if successful, error if not
 */

int main(void)
{
	int i;
	char c;
	float f;

	printf("The size of an integer is: %lu\n", sizeof(i));
	printf("The size of a character is: %lu\n", sizeof(c));
	printf("The size of a float is: %lu\n", sizeof(f));
	return (0);
}
