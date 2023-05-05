#include "main.h"
/**
 * get_endianness - checks the endianness of the machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	/* Check the first byte of i */
	if (*c)
		return (1); /* Little endian */
	else
		return (0); /* Big endian */
}

