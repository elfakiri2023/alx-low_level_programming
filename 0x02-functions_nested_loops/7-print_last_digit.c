#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @x: int type number
 * Return: the value of last digit
 */

int print_last_digit(int x)
{
	int n;

	if (x < 0)
	{
		n = -1 * (x % 10);
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = x % 10;
		_putchar(n + '0');
		return (x);
	}
}
