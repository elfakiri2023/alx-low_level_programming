#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the min number of coins
 * @argc: int number
 * @argv: int number
 * Return: 1 if error and 0 otherwise
 */

int main(int argc, char *argv[])
{
	int x, c;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = strtol(argv[1], &p, 10);
	c = 0;

	if (!*p)
	{
		while (x > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (x >= cents[i])
				{
					c += x / cents[i];
					x = x % cents[i];
				}
			}
		}
		if (x == 1)
			c++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", c);
	return (0);
}
