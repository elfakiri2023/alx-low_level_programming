#include <stdlib.h>
#include "main.h"

/**
 * *create_array - Creates an array of chars
 * @size: size
 * @c: char
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int x = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + x) = c;
		x++;
	}

	*(p + x) = '\0';

	return (p);
}
