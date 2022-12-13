#include<stdio.h>
int putchar(int ch);
void print_alphabet(void);

void print_alphabet(void)
{	
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		putchar(ch);
	
	}
	putchar('\n');
}
