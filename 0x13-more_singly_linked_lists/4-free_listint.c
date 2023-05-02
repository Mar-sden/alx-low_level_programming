#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head node of the list.
 *
 * Description: This function frees each node in the list, starting from the
 * head node, and sets the head pointer to NULL.
 */
void free_listint(listint_t *head)
{
    listint_t *current_node;

    while (head != NULL) {
        current_node = head;
        head = head->next;
        free(current_node);
    }
}

