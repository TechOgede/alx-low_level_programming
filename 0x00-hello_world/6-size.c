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
	long int x;
	long long int y;

	printf("The size of an integer is: %lu byte(s)\n", sizeof(i));
	printf("The size of a character is: %lu byte(s)\n", sizeof(c));
	printf("The size of a float is: %lu\ byte(s)\n", sizeof(f));
	printf("The size of a long integer is: %lu byte(s)\n", sizeof(x));
	printf("The size of a long long integer is: %lu byte(s)\n", sizeof(y));
	return (0);
}
