#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function to create a new dog
 * @name: char string
 * @age: int
 * @owner: char string
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dogg;
	int i, j, q;
	char *n, *o;

	dogg = malloc(sizeof(struct dog));
	if (dogg == NULL)
		returkn(NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(dogg);
		return (NULL);
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(dogg);
		return (NULL);
	}
	for (q = 0; q <= i; q++)
		n[q] = name[q];
	for (q = 0; q <= j; q++)
		o[q] = owner[q];

	dogg->name = n;
	dogg->age = age;
	dogg->owner = o;

	return (dogg);
}
