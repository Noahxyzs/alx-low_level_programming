#include <stdio.h>
#include "main.h"		
/**
 * _putchar - function name
 * @c:Ther character to print		
 * Return: On success 1 On error -1
 */
int _putchar(char c)	
{
	return (write(1, &c, 1));		
}
