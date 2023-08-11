#include <stdio.h>

/**
 * main - main function
 * Description: prints all possible combinations of single-digit numbers.
 * Return: zero
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);

		if (n < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
