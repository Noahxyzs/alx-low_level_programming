#include "main.h"
/**
 * _memset - a function
 * @s: add
 * @b: the desired value
 * @n: numbers to change
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
