#include <stdlib.h>
#include "main.h"

/**
  * _calloc - allocates memory
  * @nmemb: unsigned int
  * @size: unsigned int
  * Return: NULL or Pointer
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pntr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pntr = malloc(nmemb * size);
	
	if (pntr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(pntr) + i) = 0;
	}

	return (pntr);
}
