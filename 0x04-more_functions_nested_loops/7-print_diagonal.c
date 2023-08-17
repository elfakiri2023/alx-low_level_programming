#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n: int type number
 * Description: You can only use _putchar function to print.
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar ('\\');
		n--;
	}
	_putchar ('\n');
}
