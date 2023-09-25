#include "lists.h"
/**
 * find_listint_loop - finds the loop.
 * @head : pointer.
 * Return: pointer.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *n1, *n2;

	if (head == NULL || head->next == NULL)
	return (NULL);

	n1 = head->next;
	n2 = (head->next)->next;

	while (n2)
	{
		if (n1 == n2)
		{
			n1 = head;

			while (n1 != n2)
			{
				n1 = n1->next;
				n2 = n2->next;
			}

			return (n1);
		}

		n1 = n1->next;
		n2 = (n2->next)->next;
	}

	return (NULL);
}
