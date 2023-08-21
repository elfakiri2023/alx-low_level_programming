#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - enerates random valid passwords.
 * Description: generates random valid passwords
 * for the program 101-crackme.
 * Return: zero
 */

int main(void)
{
	int randd;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		randd = (rand() % 125) + 1;
		printf("%c", randd);
		total -= randd;
	}
	printf("%c", total);

	return (0);
}
