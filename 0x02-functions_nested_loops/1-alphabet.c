#include "main.h"
/**
 * include main'h file guard
 *
 * create a function called print alphabet
 */
void print_alphabet(void)
{
	char c = 'a';

		while(c <= 'z')
		{
			_putchar(c);
			_putchar(c++);
		}
}
