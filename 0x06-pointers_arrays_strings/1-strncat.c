#include "main.h"

/**
 * _strncat - concatenate two strings
 * it will use at most n bytes from src
 * @dest: char string
 * @src: char string
 * @n: number of elements to concatenate
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, s;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (s = 0; src[s] != '\0' && n > 0; s++, n--, i++)
	{
		dest[i] = src[s];
	}

	return (dest);
}
