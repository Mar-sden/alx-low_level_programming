#include <stdio.h>
/**
 * print_sign - a function that return sign of a number
 *
 * @n: parameter of the function
 * Return: int
 */
int print_sign(int n)
{
if (n < 0)
{
putchar ('-');
return (-1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
putchar('+');
return (n > 0);
}
