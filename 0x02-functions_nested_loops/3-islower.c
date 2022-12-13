#include "main.h"
/**
 * _islower - function check lowercase
 * @c: parametre for the value
 * Return: 1 true 0 false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
