#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes
 * @argc: int
 * @argv: array
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr1;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr1 = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr1[i]);
			break;
		}
		printf("%02hhx ", arr1[i]);
	}
	return (0);
}
