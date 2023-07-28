#include "lists.h"
/**
 * print_list - Print the elements of a singly linked list.
 * @h: A pointer to the head of the linked list.
 * Return:  the number of elements in a linked list_t list
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	while (h)
		;
	{
		printf("[%d] ", h->len ? h->len : [0]);
		printf("%s\n", h->str ? h->str : "(nil)");
		h = h->next;
		counter++;
	}
	return (counter);
}
