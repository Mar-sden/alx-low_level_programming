#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all elements of a list
 *
 * @h:
 *
 * Return: number of nodes
 *
 */
size_t print_listint(const listint_t *l)
{
	size_t count = 0;

	while (l != NULL)
	{
		printf("%d\n", l->n);
		l = l->next;
		count++;
	}
	return (count);
}
