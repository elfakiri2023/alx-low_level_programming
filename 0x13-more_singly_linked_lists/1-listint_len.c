#include "lists.h"

/**
 * listint_len - counts the number of nodes
 * @h: list head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t c = 0;

	while (cursor != NULL)
	{
		c += 1;
		cursor = cursor->next;
	}
	return (c);
}
