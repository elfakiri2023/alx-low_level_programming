#include "main.h"

/**
 * print_square -  prints a square, followed by a new line.
 * @size: int type number
 * Description: You can only use _putchar function to print.
 */

void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		y = 0;
		while (y < size)
		{
			x = 0;
			while (x < size)
			{
				_putchar('#');
				x++;
			}
			_putchar('\n');
			y++;
		}
	}
}

