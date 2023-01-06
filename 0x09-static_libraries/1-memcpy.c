#include "main.h"
/**
 *_memcpy - a function name
 *@dest: parameter
 *@src: paramter
 *@n: parameter
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
