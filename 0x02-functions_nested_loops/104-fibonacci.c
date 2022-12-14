#include <stdio.h>
/**
 * main - prints
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int j = 1000000000;
	unsigned long int a1;
	unsigned long int a2;
	unsigned long int b1;
	unsigned long int b2;

	printf("%lu", a);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", b);
		b = b + a;
		a = b - a;
	}
	a1 = (a / j);
	a2 = (a % j);
	b1 = (b / j);
	b2 = (b % j);
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", b1 + (b2 / j));
		printf("%lu", b2 % j);
		b1 = a1 + b1;
		a1 = b1 - a1;
		b2 = a2 + b2;
		a2 = b2 - a1;
	}
	printf("\n");
	return (0);
}
