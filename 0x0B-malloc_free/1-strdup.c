#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function
 * @str: parameter
 * Return: j
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	i = 0;
	j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j])
		j++;
	p = malloc(sizeof(char) * (j + 1));

	if (p == NULL)
		return (NULL);

	while ((p[i] = str[i]) != '\0')
		i++;

	return (p);
}
