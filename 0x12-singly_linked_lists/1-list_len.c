#include "lists.h"
/**
 * list_len - return the numbers of elements of a singly linked list.
 * @h: A pointer to the head of the linked list.
 * Return:  the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h);
{
	{
		size_t counter = 0;
		while (h)
		{
			h = h->next;
			counter++;
		}
		return (counter);
	}
}
