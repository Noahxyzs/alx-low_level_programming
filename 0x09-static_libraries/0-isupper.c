#include "main.h"
/**
 * _isupper - function name
 * @c: char type parameter
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
