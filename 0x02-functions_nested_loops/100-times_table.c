#include "main.h"

/**
 * print_times_table - print the n times table.
 * Description: print nothing if n is greater than 15 or less than 0.
 * @n: int type number
 */

void print_times_table(int n)
{
	int c = 0, x, z;

	if (n > 15 || n < 0)
		return;
	while (c <= n)
	{
		for (x = 0; x <= n; x++)
		{
			z = c * x;
			if (z > 99)
			{
				_putchar(z / 100 + '0');
				_putchar((z / 10 % 10) + '0');
				_putchar(z % 10 + '0');
			}
			else if (z > 9)
			{
				_putchar(' ');
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else if (x != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else
				_putchar(z + '0');

			if (x != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		c++;
	}
}
