#include "main.h"

/**
 * set_bit - sets value of a bit.
 * @n: decimal number
 * @index: index position to change.
 * Return: 1 if it worked.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
