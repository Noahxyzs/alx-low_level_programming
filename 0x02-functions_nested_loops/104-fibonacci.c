#include <stdio.h>
/**
 * main - prints
 *
 * Return: 0
 */
int main(void)
{
	long int i;
	long int a = 1;
	long int b = 2;
	long int j = 10000000;
	long int a1;
	long int a2;
	long int b1;
	long int b2;

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
