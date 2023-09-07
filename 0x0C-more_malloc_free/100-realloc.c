#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	char *ptr0;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr2 = malloc(new_size);
	if (!ptr2)
		return (NULL);

	ptr0 = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr2[i] = ptr0[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr2[i] = ptr0[i];
	}

	free(ptr);
	return (ptr2);
}
