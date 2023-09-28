#include "main.h"

/**
 * binary_to_uint - converts a binary number.
 * @b: pointer.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int numberrberr;

	numberrberr = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		numberrberr <<= 1;
		if (b[i] == '1')
			numberrberr += 1;
	}
	return (numberrberr);
}
