#include <stdio.h>

/**
 * main - main function
 * Description: alphabet in lowercase then in uppercase followed by a new line
 * Return: zero
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}

	putchar('\n');
	return (0);
}
