#include <stdio.h>

/**
 * main - print all arguments
 * @argc: number
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
	{
		printf("%s\n", argv[arg]);
	}

	return (0);
}
