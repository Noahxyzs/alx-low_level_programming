#include "main.h"

/**
 * print_binary - function name
 * @n: ulong int
 */
void print_binary(unsigned long int n)
{
	int i;
	int a;
	unsigned long int b;

	a = 0;
	for (i = 63; i >= 0; i--)
	{
		b = n >> i;

		if (b & 1)
		{
			_putchar('1');
			a++;
		}
		else if (a)
			_putchar('0');
	}
	if (!a)
		_putchar('0');
}
