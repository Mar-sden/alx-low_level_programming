#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head node of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: Pointer to the new node, or NULL if memory allocation fails.
 */
listint_t *add_nodeint_end(listint_t **head, int n)
{
    listint_t *new_node, *temp;

    if (head == NULL) {
        return NULL;
    }

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL) {
        return NULL;
    }

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
    } else {
        temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    return new_node;
}
