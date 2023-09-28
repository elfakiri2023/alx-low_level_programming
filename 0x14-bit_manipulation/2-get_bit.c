#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit.
 * @n: number
 * @index: index.
 * Return: value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int h;

	if (index > 64)
		return (-1);

	h = n >> index;

	return (h & 1);
}
