#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	int n;

	i = '0';
	n = '0';
	for (n = 0; n <= '9'; n++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (!((i == n) || (n > i)))
			{
				putchar(n);
				putchar(i);
				if (!(i == '9' && n == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
