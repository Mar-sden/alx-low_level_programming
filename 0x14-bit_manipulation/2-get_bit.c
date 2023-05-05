#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: the index of the bit to get (starting from 0)
 *
 * Return: the value of the bit at index index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	/* Check if index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* Shift the mask to the bit position of the index */
	mask = mask << index;

	/* If the bit is set, return 1; otherwise, return 0 */
	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

