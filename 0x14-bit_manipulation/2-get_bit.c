#include "main.h"

/**
 * get_bit - function name
 * @n: ulong int
 * @index: uint
 * Return: i
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);

	i = (n >> index) & 1;

	return (i);
}
