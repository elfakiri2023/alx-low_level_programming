#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize `struct dog`
 * @d: struct
 * @name: string
 * @age: integer
 * @owner: string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
