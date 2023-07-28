#include "lists.h"

/**
 * list_len - Return the number of elements in a singly linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;
	while (h)
	{
		h = h->next;
		counter++;
	}
	return counter;
}

