#include "lists.h"

/**
 * freeee - free a linked list.
 * @head: head
 * Return: void
 */
void freeee(listp_t **head)
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
 * print_listint_safe - print a linked list
 * @head: head
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				freeee(&hptr);
				return (n);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n++;
	}

	freeee(&hptr);
	return (n);
}
