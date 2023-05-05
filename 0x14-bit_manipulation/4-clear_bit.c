#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a pointer to the number to clear the bit in
 * @index: the index of the bit to clear (starting from 0)
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	/* Check if index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* Shift the mask to the bit position of the index */
	mask = mask << index;

	/* Clear the bit by performing a bitwise AND operation with the complement of the mask */
	*n = *n & ~mask;

	return (1);
}

