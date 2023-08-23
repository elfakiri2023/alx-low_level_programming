#include "main.h"

/**
 * _strcat -  concatenates two strings.
 * @dest: char string
 * @src: char string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, s;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (s = 0; src[s] != '\0'; s++)
	{
		dest[i] = src[s];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
