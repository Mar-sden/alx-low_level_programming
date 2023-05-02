#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head node of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: Pointer to the new node, or NULL if memory allocation fails.
 */
listint_t *add_nodeint(listint_t **head, int n)
{
    listint_t *new;

    if (head == NULL) {
        return NULL;
    }

    new = malloc(sizeof(listint_t));
    if (new == NULL) {
        return NULL;
    }

    new->n = n;
    new->next = *head;
    *head = new;

    return new;
}
