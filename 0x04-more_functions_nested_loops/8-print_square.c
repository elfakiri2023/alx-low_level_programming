#include "main.h"

/**
 * print_square -  prints a square, followed by a new line.
 * @size: int type number
 * Description: You can only use _putchar function to print.
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		while (size > 0)
		{
			while (size > 0)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
}

