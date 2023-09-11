#include <stdlib.h>
#include "dog.h"


/**
 * new_dog - function to create a new dog
 * @name: char
 * @age: float
 * @owner: char string
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_1, len_2;

	len_1 = get_strlen(name);
	len_2 = get_strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len_1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len_2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	copyy(dog->name, name);
	copyy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

/**
 * get_strlen - return the string length
 * @s: string
 * Return: the length
 */

int get_strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *copyy - copies the string pointed to
 * @dest: pointer
 * @src: string
 * Return: the pointer
 */

char *copyy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
