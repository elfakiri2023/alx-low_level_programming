#include "lists.h"

/**
 * add_node_end - adds a new node
 * @head: head
 * @str: string
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *currentt;
	size_t n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new_node->len = n;
	new_node->next = NULL;
	currentt = *head;

	if (currentt == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (currentt->next != NULL)
			currentt = currentt->next;
		currentt->next = new_node;
	}

	return (*head);
}
