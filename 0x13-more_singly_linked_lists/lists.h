#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - linked list
 * @n: int
 * @next: pointer
 * Description: singly linked.
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct listp_s - singly linked
 * @p: pointer
 * @next: pointer
 * Description: list of pointers
 */

typedef struct listp_s
{
	void *p;
	struct listp_s *next;
} listp_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif