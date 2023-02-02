#include "main.h"

/**
 * flip_bits - function name
 * @n: ulong int
 * @m: ulong int
 *
 * Return: j
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int j;
	unsigned long int x;
	unsigned long int xor = n ^ m;

	j = 0;
	for (i = 63; i >= 0; i--)
	{
		x = xor >> i;
		if (x & 1)
			j++;
	}

	return (j);
}
