#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 *             one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that are different between n and m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	/* Count the number of set bits in the difference */
	while (diff != 0)
	{
		if (diff & 1)
			count++;
		diff >>= 1;
	}

	return (count);
}

