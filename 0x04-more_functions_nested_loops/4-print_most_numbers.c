#include "main.h"

/**
 * print_most_numbers - Print the numbers from 0 to 9
 * and skip 2 and 4.
 * Description: only use _putchar 2 times.
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x != 2 || x != 4)
		{
			_putchar(x + '0');
		}
	}

	_putchar('\n');
}
