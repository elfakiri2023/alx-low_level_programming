#include "main.h"

/**
 * print_numbers - Print the numbers from 0 to 9.
 * Description: only use _putchar 2 times.
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
