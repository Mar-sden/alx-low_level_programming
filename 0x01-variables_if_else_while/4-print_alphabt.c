#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabets
 * Return: Always 0 (success)
 */
int main(void)
{
	int y;

	for (y = 'a'; y <= 'z'; y++)
	{
		if (y != 'e' && y != 'q')
		{
			putchar(y);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
