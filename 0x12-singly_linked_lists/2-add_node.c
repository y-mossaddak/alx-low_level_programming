#include "lists.h"

/**
 * list_len - Return the number of elements in a singly linked list.
 * @h: A pointer to the head of the linked list.
/**
 * _str_len - Calculate the length of a string.
 * @str: The string to be calculated.
 *
 * Return: The length of the string.
 */
int _str_len(char *str)
{
	if (!str)
		return (0);
	return (1 + _str_len(str + 1));
}

/**
 * add_node - Add a new node to the beginning of a singly linked list.
 * @head: Pointer to the head of the linked list.
 * @str: The string to be duplicated and added as a new node.
 *
 * Return: Pointer to the new head of the linked list.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str_ptr = strdup(str);
	list_t *new_node;

	if (!str_ptr)
		return (NULL);

	new_node = (list_t *)malloc(sizeof(list_t));
	if (!new_node)
	{
		free(str_ptr);
		return (NULL);
	}

	new_node->str = str_ptr;
	new_node->len = _str_len(str_ptr);
	new_node->next = *head;

	*head = new_node;

	return (*head);
}

