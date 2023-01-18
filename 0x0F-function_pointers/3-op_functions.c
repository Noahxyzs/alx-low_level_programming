#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - fun name
 * @a: para
 * @b: para
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - fun name
 * @a: para
 * @b: para
 * Return: subtruction result
 */
int op_sub(int a, int b)	
{
	return (a - b);
}
/**
 * op_mul - fun name
 * @a: para
 * @b: para
 * Return: multiplication result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - fun name
 * @a: para
 * @b: para
 * Return: division result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - fun name
 * @a: para
 * @b: para
 * Return: remainder result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
