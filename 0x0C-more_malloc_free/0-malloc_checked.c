#include <stdlib.h>
/**
  * malloc_checked - allocates memory
  * @b: unsigned int
  * Return: pointer
  */
void *malloc_checked(unsigned int b)
{
	void *pointerr = malloc(b);

	if (pointerr == NULL)
		exit(98);

	return (pointerr);
	}
