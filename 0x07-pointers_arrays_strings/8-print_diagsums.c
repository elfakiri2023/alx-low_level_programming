#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: array
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int i;
	int total;
	int size1;

	i = 0;
	total = 0;
	size1 = size * size;
	while (i < size1)
	{
		if (i % (size + 1) == 0)
		{
			total += a[i];
		}
		i++;
	}
	printf("%d, ", total);

	total = 0;
	i = 0;
	while (i < size1)
	{
		if (i % (size - 1) == 0 && i != (size1 - 1) && i != 0)
		{
			total += a[i];
		}
		i++;
	}
	printf("%d\n", total);
}
