#include "main.h"

/**
 * main - print _putchar followed by a new line
 * Description: not allowed to include standard libraries.
 * Return: 0
 */

int main(void)
{
	char varr[] = "_putchar";
	int i = 0;

	while (varr[i] != '\0')
	{
		_putchar(varr[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
