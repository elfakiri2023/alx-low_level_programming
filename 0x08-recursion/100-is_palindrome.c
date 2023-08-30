#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome or not.
 * @s: char string
 * Return: 1 if palindrome and 0 if not a palindrome
 */

int is_palindrome(char *s)
{
	int palindrome_length(char *s);
	int check_palindrome(char *s, int l);
	int length;

	length = palindrome_length(s) - 1;

	return (check_palindrome(s, --length));
}

/**
 * palindrome_length - get the length
 * @s: char string
 * Return: length of the string
 */

int palindrome_length(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + palindrome_length(++s));
}

/**
 * check_palindrome - check the palindrome
 * @s: char string
 * @l: length of string
 * Return: 1 if palindrome and 0 if not a palindrome
 */

int check_palindrome(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (check_palindrome(++s, l - 2));
	}
	else
		return (0);
}
