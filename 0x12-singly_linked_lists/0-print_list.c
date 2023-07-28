/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
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
