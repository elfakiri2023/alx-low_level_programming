#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - a linked list.
 * @str: char
 * @len: the length
 * @next: the next node.
 * Description: list node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
