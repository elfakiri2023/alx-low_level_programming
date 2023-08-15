#include <stdio.h>

/**
 * main - main function
 * Description: print the first 50 fibonacci numbers.
 * Return: zero
 */

int main(void)
{
	int start = 2;
	long int i = 1, j = 2;
	long int x;

	printf("%lu, ", i);
	while (start <= 50)
	{
		if (start == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		x = j;
		j += i;
		i = x;
		start++;
	}

	return (0);
}
