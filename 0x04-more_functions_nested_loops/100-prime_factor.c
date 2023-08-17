#include <stdio.h>
#include <math.h>

/**
 * main - main function
 * Description: Find and print the largest prime
 * factor of the number 612852475143
 * Return: zero
 */

int main(void)
{
	int x;
	long num = 612852475143;

	for (x = (int) sqrt(num); x > 2; c++)
	{
		if (num % x == 0)
		{
			printf("%d\n", c);
			break;
		}
	}

	return (0);
}
