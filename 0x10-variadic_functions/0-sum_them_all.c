#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum
 * @n: the number of arguments
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	/* creating va_list to store the variable argument list */
	va_list nums;
	unsigned int count;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	/* init valist for the number of arguments */
	va_start(nums, n);

	/* loop through/access all arguments stored in the valist */
	for (count = 0; count < n; count++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
