#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: string
 * @s2: string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, x, c, d;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (x = 0; s2[x] != '\0'; x++)
		;

	a = malloc((i * sizeof(*s1)) + (x * sizeof(*s2)) + 1);
	if (a == NULL)
	{
		return (NULL);
	}

	for (c = 0, d = 0; c < (i + x + 1); c++)
	{
		if (c < i)
			a[c] = s1[c];
		else
			a[c] = s2[d++];
	}

	return (a);
}
