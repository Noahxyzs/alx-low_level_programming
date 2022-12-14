#include <stdio.h>
/**
 * main - prints
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int i, sum;
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int j = 10000000000;
	unsigned long int a1, a2, b1, b2, c1, c2;

	printf("%lu", a);
	for (i = 0; i < 92; i++)
	{
		sum = a + b;
		printf(", %lu", sum);
		a = b;
		b = sum;
	}
	a1 = (a / j);
	a2 = (a % j);
	b1 = (b / j);
	b2 = (b % j);
	for (i = 93; i < 99; ++i)
	{
		c1 = a1 + b1;
		c2 = a2 + b2;
		if (a2 + b2 > 9999999999)
		{
			c1 += 1;
			c2 %= j;
		}
		printf("%lu%lu" c1, c2);
		if (i != 98)
			printf(",");
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
	}
	printf("\n");
	return (0);
}
