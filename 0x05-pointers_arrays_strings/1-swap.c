#include "main.h"

/**
 * swap_int - swap the values of 2 integers
 * @a: first pointer
 * @b: second pointer
 * Return; 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
