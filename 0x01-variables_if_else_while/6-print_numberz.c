#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: (0) if successful
 */

int main(void)
{
	int i;
	char *nums;

	nums = "0123456789";
	for (i = 0; i < 10; i++)
	{
		putchar(nums[i]);
	}
	putchar('\n');
	return (0);
}

