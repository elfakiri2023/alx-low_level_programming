#include <stdio.h>

/**
 * main - main function
 * Description: prints the lowercase alphabet in reverse.
 * Return: zero
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
