#include <stdio.h>

/**
 * main - main function
 * Description: prints all possible different combinations of three digits.
 * Return: zero
 */

int main(void)
{
	int n, y, x;

	for (n = 48; n < 58; n++)
	{
		for (y = 49; y < 58; y++)
		{
			for (x = 50; x < 58; x++)
			{
				if (y > n && x > y)
				{
					putchar(n);
					putchar(y);
					putchar(x);
					if (n != 55 || y != 56 || x != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
