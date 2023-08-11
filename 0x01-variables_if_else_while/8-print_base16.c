#include <stdio.h>

/**
 * main - main function
 * Description: prints all the numbers of base 16 in lowercase.
 * Return: zero
 */

int main(void)
{
	int n;
	char c;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
