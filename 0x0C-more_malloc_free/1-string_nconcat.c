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
	char *ptr;
	int num, len, i, j;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= cal_strlen(s2))
		num = cal_strlen(s2);

	len = cal_strlen(s1) + num + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
