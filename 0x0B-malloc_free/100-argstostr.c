#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - oncatenates all the arguments of your program.
 * @ac: int
 * @av: double pointer
 * Return: null = fail, pointer otherwise
 */

char *argstostr(int ac, char **av)
{
	char *a, *r;
	int i, j, t;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0, t = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, t++)
			;
		t++;
	}
	t++;

	a = malloc(t * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}

	r = a;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*a = av[i][j];
			a++;
		}
		*a = '\n';
		a++;
	}

	return (r);
}
