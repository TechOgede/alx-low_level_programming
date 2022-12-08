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

	printf("Size of a char: %lu byte(s)", sizeof(c));
	printf("Size of an int: %lu byte(s)", sizeof(i));
	printf("Size of a long int: %lu\ byte(s)", sizeof(x));
	printf("Size of a long long int: %lu byte(s)", sizeof(y));
	printf("Size of a float: %lu byte(s)", sizeof(f));
	return (0);
}
