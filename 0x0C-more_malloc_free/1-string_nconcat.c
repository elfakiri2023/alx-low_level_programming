#include <stdlib.h>
#include <stdlib.h>
#include "main.h"

/**
 * cal_strlen - calculate and return the length
 * @string: char string
 * Return: length
 */

int cal_strlen(char *string)
{
	int x;

	for (x = 0; string[x] != '\0'; x++)
		;
	return (x);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: char string
 * @s2: char string
 * @n: bytes to concat
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int x, len, i, j;

	x = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (x < 0)
		return (NULL);
	if (x >= cal_strlen(s2))
		x = cal_strlen(s2);

	len = cal_strlen(s1) + x + 1;

	p = malloc(sizeof(*p) * len);
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++) 
		p[i] = s1[i];
	for (j = 0; j < x; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';

	return (p);
}
