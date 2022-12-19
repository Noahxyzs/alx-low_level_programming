#include "main.h"
/**
 * puts2 - function name
 * @str: string
 * Return: print
 */
void puts2(char *str)
{
	int l = 0;
	int i = 0;
	char *p = str;
	int j;

	while (*p != '\0')
	{
		p++;
		l++;
	}
	i = l - 1;
	for (j = 0 ; j <= i ; j++)
	{
		if (j % 2 == 0)
	{
		_putchar(str[j]);
	}
	}
	_putchar('\n');
}
