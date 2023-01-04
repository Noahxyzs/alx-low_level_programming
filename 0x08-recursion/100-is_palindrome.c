#include "main.h"

int palindrome(char *s, int i, int len);
int string(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: parameter
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome(s, 0, string(s)));
}

/**
 * string - function name
 * @s: parameter
 * Return: string
 */
int string(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string(s + 1));
}

/**
 * palindrome - fuction name
 * @s: parameter
 * @i: parameter
 * @j: parameter
 * Return: 1 if palindrome, 0 if not
 */
int palindrome(char *s, int i, int j)
{
	if (*(s + i) != *(s + j - 1))
		return (0);
	if (i >= j)
		return (1);
	return (palindrome(s, i + 1, j - 1));
}
