#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the min number of coins.
 * @argc: number
 * @argv: number
 * Return: 1 = error, 0 = correct
 */

int main(int argc, char *argv[])
{
	int t, c;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	t = strtol(argv[1], &p, 10);
	c = 0;

	if (!*p)
	{
		while (t > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (t >= cents[i])
				{
					c += t / cents[i];
					t = t % cents[i];
				}
			}
		}
		if (t == 1)
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
