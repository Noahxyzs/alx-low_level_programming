#include "main.h"
int prime_number(int n, int i);
/**
 * is_prime_number - function
 * @n: parameter
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

/**
 * prime_number - function
 * @n: parameter
 * @i: parameter
 * Return: 1 if n is prime, 0 if not
 */
int prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_number(n, i - 1));
}
