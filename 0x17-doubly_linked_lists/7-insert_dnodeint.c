#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a c node
 * @h: head
 * @idx: index
 * @n: value
 * Return: the address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *c;
	dlistint_t *head;
	unsigned int i;

	c = NULL;
	if (idx == 0)
		c = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					c = add_dnodeint_end(h, n);
				else
				{
					c = malloc(sizeof(dlistint_t));
					if (c != NULL)
					{
						c->n = n;
						c->next = head->next;
						c->prev = head;
						head->next->prev = c;
						head->next = c;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (c);
}
