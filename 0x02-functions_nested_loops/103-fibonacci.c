#include <stdio.h>

/**
 * main - Finds and prints the sum followed by a new line
 * Return: Always zero (Success)
 */

int main(void)
{
	int n;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (n = 1; n <= 33; ++n)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}

	printf("%lu\n", sum);

	return (0);
}
