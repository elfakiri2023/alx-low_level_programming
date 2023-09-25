#include "lists.h"

/**
 * freeeee - free a linked list.
 * @head: head.
 * Return: void
 */
void freeeee(listp_t **head)
{
	listp_t *t;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((t = curr) != NULL)
		{
			curr = curr->next;
			free(t);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - free a linked list
 * @h: head
 * Return: size of the list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	listp_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				freeeee(&hptr);
				return (n);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		n++;
	}

	*h = NULL;
	freeeee(&hptr);
	return (n);
}
