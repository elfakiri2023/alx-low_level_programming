#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n: int type number
 * Description: You can only use _putchar function to print.
 */

void print_diagonal(int n)
{
	int i = 0;
	int x;

	while (n > 0)
	{
		x = 0;

		while (x > i)
		{
			_putchar (' ');
			x++;
		}

		_putchar ('\\');

		n--;
		i++;
	}
	_putchar ('\n');
}
