#include "lists.h"

/**
 * add_node - adds a new node
 * @head: head
 * @str: string
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nodee;
	size_t n;

	nodee = malloc(sizeof(list_t));
	if (nodee == NULL)
		return (NULL);

	nodee->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	nodee->len = n;
	nodee->next = *head;
	*head = nodee;

	return (*head);
}
