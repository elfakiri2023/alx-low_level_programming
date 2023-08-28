#include "main.h"
#include <stdlib.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: string
 * @needle: string
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, b, c;

	i = 0;
	c = 0;
	while (haystack[i] != '\0')
	{
		b = 0;
		while (needle[b + c] != '\0' && haystack[i + c] != '\0'
		       && needle[b + c] == haystack[i + c])
		{
			if (haystack[i + c] != needle[b + c])
				break;
			c++;
		}
		if (needle[b + c] == '\0')
			return (&haystack[i]);
		b++;
		i++;
	}

	return (NULL);
}
