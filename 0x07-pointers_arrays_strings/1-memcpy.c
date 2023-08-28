#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: char array
 * @src: char array
 * @n: elements number
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
