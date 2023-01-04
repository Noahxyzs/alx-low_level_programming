#include "main.h"
/**
 * fuct_sqrt_recursion - place holder
 * @n: parameter
 * @i: parameter
 * Return: function
 */
int fuct_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function
 * @n: parameter
 * Return: fuction
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (fuct_sqrt_recursion(n, 0));
}

/**
 * fuct_sqrt_recursion - second function
 * @n: parameter
 * @i: parameter
 * Return: function
 */
int fuct_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (fuct_sqrt_recursion(n, i + 1));
}
