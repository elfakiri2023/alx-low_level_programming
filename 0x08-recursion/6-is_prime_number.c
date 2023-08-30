#include "main.h"

/**
 * is_prime_number - determine if a number is a prime number or not.
 * @n: number
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int prime_number_checker(int divider, int n);

	int divider = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n % n == 0 || n % 1 == 0)
	{
		if (prime_number_checker(divider, n) != 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

/**
 * prime_number_checker - helper function
 * @n: number
 * @divider: incrementer divisor.
 * Return: 0 if not prime, 1 if prime number
 */

int prime_number_checker(int divider, int n)
{
	if (divider < n)
	{
		if (n % divider == 0)
		{
			return (0);
		}
		else
		{
			++divider;
			return (prime_number_checker(divider, n));
		}
	}
	else
	{
		return (1);
	}
}
