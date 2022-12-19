#include "main.h"
/**
 * _puts - function created
 * @str: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
