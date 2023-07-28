#include "lists.h"

/**
 * list_len - Return the number of elements in a singly linked list.
 * @h: A pointer to the head of the linked list.
/**
 * free_list - Free memory allocated for a singly linked list.
 * @head: Pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
    list_t *current = head;
    list_t *next;

    while (current != NULL)
    {
        next = current->next;
        free(current->str);
        free(current);
        current = next;
    }
}

