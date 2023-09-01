#include <stdio.h>
#include <stdlib.h>

/**
 * main - add 2 positive numbers
 * @argc: number
 * @argv: array
 * Description: Print the result, followed by a new line
 * Return: 1 = error, 0 = correct
 */

int main(int argc, char *argv[])
{
	int t, i;
	char *p;
	int num;

	t = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				t += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", t);
	return (0);
}
