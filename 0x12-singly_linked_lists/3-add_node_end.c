#include "lists.h"

/**
 * add_node_end - Add a new node at the end of the linked list.
 * @head: Pointer to the head of the linked list.
 * @str: The string to be duplicated and added as a new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	size_t numchar;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return NULL;

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return NULL;
	}

	for (numchar = 0; str[numchar] != '\0'; numchar++)
		;

	new_node->len = numchar;
	new_node->next = NULL;

	temp = *head;
	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}

