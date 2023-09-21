#include "lists.h"

/**
 * add_node_end - add a new node.
 * @head: head
 * @str: string
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *neww, *currentt;
	size_t n;

	neww = malloc(sizeof(list_t));
	if (neww == NULL)
		return (NULL);

	neww->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	neww->len = n;
	neww->next = NULL;
	currentt = *head;

	if (currentt == NULL)
	{
		*head = neww;
	}
	else
	{
		while (currentt->next != NULL)
			currentt = currentt->next;
		currentt->next = neww;
	}

	return (*head);
}
