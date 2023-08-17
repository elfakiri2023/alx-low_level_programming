#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers,
 * Description: from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int n, x;

	for (n = 0; n < 10; n++)
	{
		for (x = 0; x <= 14; x++)
		{
			_putchar (x + '0');
		}

		_putchar ('\n');
	}
}
