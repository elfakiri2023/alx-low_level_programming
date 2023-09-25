#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - calculates the sum
 * @head : pointer
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int a = 0;

	while (head)
	{
		a += head->n;
		head = head->next;
	}
	return (a);
}
