#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: char string
 * Return: string
 */

char *rot13(char *s)
{
	int i, j;

	char one[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char two[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; one[j] != '\0'; j++)
		{
			if (s[i] == one[j])
			{
				s[i] = two[j];
				break;
			}
		}
	}

	return (s);
}
