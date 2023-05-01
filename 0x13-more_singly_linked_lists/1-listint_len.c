#include "lists.h"

/**
 * listint_len - a function
 *
 * @m: pointer
 *
 * Return: number
*/
size_t listint_len(const listint_t *m)
{
	size_t value = 0;

	if (m == NULL)
		return (0);

	while (m->next != NULL)
	{
		if (m->n != '\0')
			value++;

		m = m->next;
	}

	return (value);
}
