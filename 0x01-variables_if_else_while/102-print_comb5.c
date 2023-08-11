#include <stdio.h>

/**
 * main - main function
 * Description: prints all possible combinations of two two-digit numbers.
 * Return: zero
 */

int main(void)
{
	int n, y;

	for (n = 0; n < 100; n++)
	{
		for (y = 0; y < 100; y++)
		{
			if (n < y)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				if (n != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
