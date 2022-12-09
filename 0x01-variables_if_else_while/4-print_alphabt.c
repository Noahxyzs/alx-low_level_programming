#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	char n;

	n = 'a';
	while
		(n <= 'z') {
			if ((n != 'q' && n != 'e') && n <= 'z')
			putchar(n);
			n++;
		}
	putchar('\n');
	return (0);
}
