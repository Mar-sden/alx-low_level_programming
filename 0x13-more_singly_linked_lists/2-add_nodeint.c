#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Adds a new node to the beginning of a singly linked list
 * @head: Pointer to a pointer to the head node of the list
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if memory allocation fails
 */
listint_t *add_nodeint(listint_t **head, int n)
{
    if (head == NULL) {
        return NULL;
    }

    listint_t *new_node = malloc(sizeof(listint_t));
    if (new_node == NULL) {
        return NULL;
    }

    new_node->n = n;
    new_node->next = *head;
    *head = new_node;

    return new_node;
}
