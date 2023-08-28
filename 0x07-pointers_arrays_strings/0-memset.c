#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: array
 * @b: constant byte
 * @n: number of bytes
 * Description: function fills the first n bytes of
 * the memory area pointed to by s with the constant
 * byte b Returns a pointer to the memory area s
 * Return: Pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
