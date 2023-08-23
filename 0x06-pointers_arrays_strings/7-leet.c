#include "main.h"

/**
 * leet - encodes a string in 1337.
 * @s: char string
 * Return: string
 */
char *leet(char *s)
{
	int i, j;

	char *one = "aAeEoOtTlL";
	char *two = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == one[j])
			{
				s[i] = two[j];
			}
		}
	}

	return (s);
}
