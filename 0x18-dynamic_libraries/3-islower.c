#include "main.h"

/**
 * islower - Check Main
 * c: An input character
 * Description: function uses putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char k;
	int lower = 0;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k == c)
			lower = 1;
	}

	return (lower);
}
