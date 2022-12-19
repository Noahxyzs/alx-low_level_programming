#include "main.h"

/**
 * _atoi - a function name
 * @s: string
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i, d, n, l, f, j;

	i = 0;
	d = 0;
	n = 0;
	l = 0;
	f = 0;
	j = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			j = s[i] - '0';
			if (d % 2)
				j = -j;
			n = n * 10 + j;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
