#include "lists.h"
/**
 * free_listint2 - free the list.
 * @head : pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;

	while (*head)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
	head = NULL;
}
