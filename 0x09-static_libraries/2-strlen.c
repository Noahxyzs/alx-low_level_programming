#include "main.h"
/**
 * _strlen - function name
 * @s: parameter
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
