#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabets in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'c'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
