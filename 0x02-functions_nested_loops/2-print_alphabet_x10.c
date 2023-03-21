#include "main.h"

/**
 * print_alphabet_x10 - Check Main
 * Description: function uses putchar function
 * alphabet in lowercase
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char m;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
			_putchar(m);
		_putchar('\n');
	}
}
