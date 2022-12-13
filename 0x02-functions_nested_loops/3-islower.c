#include "main.h"

/**
 * _islower - determines if a char is lowercase or not
 * @ch: a character
 *
 * Description: Compares int value of char with ASCII value
 * Return: 1 if char is lowercase. 0 if otherwise
 */

int _islower(int ch)
{
	if (ch >= 97 && ch <= 122)
		return (1);
	else
		return (0);
}
