#include "lists.h"
/**
 * get_nodeint_at_index - finds a given node
 * @head : pointer
 * @index: index
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	for (i = 0; (i < index) && (head->next); i++)
		head = head->next;

	if (i < index)
		return (NULL);

	return (head);
}
