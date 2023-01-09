#include <stdlib.h>
#include "main.h"

/**
* *argstostr - function name
* @ac: parameter
* @av: parameter
* Return: str
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;
		l++;
	}

	str = malloc((sizeof(char) * l) + 1);

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
