#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: char string
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
