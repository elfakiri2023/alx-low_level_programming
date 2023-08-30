#include "main.h"

/**
 * _sqrt_recursion - return the natural square root
 * @n: number
 * Return: if no natural square root
 */

int _sqrt_recursion(int n)
{
	int myFunction(int n, int sq);

	int sq = 1;

	return (myFunction(n, sq));
}

/**
 * myFunction - helper function
 * @sq: number
 * @n: number
 * Return: square root if natural square root
 */

int myFunction(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (myFunction(n, ++sq));
	}
	else
	{
		return (-1);
	}
}
