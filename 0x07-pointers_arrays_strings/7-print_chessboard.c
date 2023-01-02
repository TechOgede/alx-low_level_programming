#include "main.h"

/**
* print_chessboard - prints a chessboard
* @a: an array of arrays
*
* Description: uses nested loops to print the array of arrays
* Return: no return value
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
