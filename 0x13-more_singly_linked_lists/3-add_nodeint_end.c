#include "lists.h"

/**
 * add_nodeint_end - adds a node
 * @head: pointer
 * @n: int
 * Return: address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newww;
	listint_t *cursor = *head;

	newww = malloc(sizeof(listint_t));
	if (newww != NULL)
	{
		newww->n = n;
		newww->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = newww;
	}
	else
		*head = newww;
	return (newww);
}
