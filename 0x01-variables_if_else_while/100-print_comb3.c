#include <stdio.h>

/**
 * main - main function
 * Description: prints all possible different combinations of two digits.
 * Return: zero
 */

int main(void)
{
	int n, x;

	for (n = 48; n < 58; n++)
	{
		for (x = 49; x < 58; x++)
		{
			if (x > n)
			{
				putchar(n);
				putchar(x);
				if (n < 56 || x < 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
