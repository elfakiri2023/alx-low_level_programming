#include <stdio.h>

/**
 * main - finds and prints the 1st 98 Fibonacci numbers.
 * Return: zero always (Success)
 */

int main(void)
{
	unsigned long int i, j, k, j2, j3, k2, k3;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	j2 = j / 1000000000;
	j3 = j % 1000000000;
	k2 = k / 1000000000;
	k3 = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k2 + (k3 / 1000000000));
		printf("%lu", k3 % 1000000000);
		k2 = k2 + j2;
		j2 = k2 - j2;
		k3 = k3 + j3;
		j3 = k3 - j3;
	}

	printf("\n");

	return (0);
}
