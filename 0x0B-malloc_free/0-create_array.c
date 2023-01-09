#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function name
 *  @c: parameter
 *  @size: parameter
 *  Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
