#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase using only _putchar
 * Return: zero
 */

void print_alphabet(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
