#include "main.h"

/**
* get_endianness - determines how multibyte data is stored on a machine
* Description: determines if a machine is big or little endian
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned i;

	char *c = (char *) &i;

	if (*c)
		return (1);
	else
		return (0);
}
