#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the number to set the bit in
 * @index: the index of the bit to set (starting from 0)
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	/* Check if index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* Shift the mask to the bit position of the index */
	mask = mask << index;

	/* Set the bit by performing a bitwise OR operation with the mask */
	*n = *n | mask;

	return (1);
}

