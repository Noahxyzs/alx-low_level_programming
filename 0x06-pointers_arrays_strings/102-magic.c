#include <stdio.h>
/**
 * main - function
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
        p = &n;
/*
 * wright ur code hear
 * You are not allowed to use the variable a in your new line of code
 * You are not allowed to modify the variable p
 * You can only write one statement
 * You are not allowed to use ,
 * You are not allowed to code anything else than the line of expected line of code at the expected line
 */
	*(p + 5) = 98;
	/*.......it prints 98 with new lign*/
	printf("a[2] = %d\n", a[2]);
	return (0);
}
