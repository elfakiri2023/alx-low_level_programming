#include "main.h"

/**
 * print_line -  draws a straight line in the terminal,
 * @n: int type number
 * Description: You can only use _putchar function to print.
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar ('_');
		n--;
	}
	_putchar ('\n');
}
