#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node
 * @head : pointer
 * @idx  : index
 * @n    : value for the new node
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int n;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (n = 0; n < (idx - 1); n++)
	{
		if (temp == NULL || temp->next == NULL)
		return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
