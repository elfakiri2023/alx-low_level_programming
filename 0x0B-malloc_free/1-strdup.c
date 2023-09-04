#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string using malloc.
 * @str: string
 * Return: Pointer
 */

char *_strdup(char *str)
{
	char *a;
	int i, x;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
	{
		a[x] = str[x];
	}
	a[x] = '\0';

	return (a);
}
