#include "main.h"

/**
 * _puts - function that prints a string
 * @str: char array string type
 * Description: followed by a new line, to stdout
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
