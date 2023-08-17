#include "main.h"

/**
 * main - Fizz-Buzz test.
 * Description: You can only use _putchar function to print.
 * Return: 0
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			_putchar("FizzBuzz");
		}
		else if ((n % 3) == 0)
		{
			_putchar("Fizz");
		}
		else if ((n % 5) == 0)
		{
			_putchar("Buzz");
		}
		else
		{
			_putchar("%d", n);
		}

		_putchar(" ");
		n++;
	}
	return (0);
}

