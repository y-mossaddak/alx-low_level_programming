#include "lists.h"
/**
 * add_node_end - add node to the end of the list
 * @head:list head
 * @str: string to be dupplicated
 * Return: the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	size_t numchar;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (umnchar = 0; str[numchar]; numchar++)
		;

	new_node->len = nchar;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}

