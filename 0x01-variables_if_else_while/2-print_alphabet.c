#include <stdio.h>

/**
 * main - main function
 * Description: prints the alphabet in lowercase, followed by a new line
 * Return: zero
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
