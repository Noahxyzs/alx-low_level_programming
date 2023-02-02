#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: success 1.
 *
 * On error, -1 is returned, and errno is set appropriate
 *
 * function _putchar create a function called _putchar
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
