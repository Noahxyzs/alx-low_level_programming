#include <stdio.h>
/**
 * main - prints
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long int a, b, j, sum;

	a = 1;
	b = 2;
	sum = 0;
	for (i = 1; i <= 33; ++i)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		j = a + b;
		a = b;
		b = j;
	}
	printf("%lu\n", sum);
	return (0);
}


