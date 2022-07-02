#include "main.h"
/**
 * otra - auxiliar
 * @n: variable number integer
 * @a: raiz
 * Return: raiz n
 */
int otra(int n, int a)
{
	if (a * a == n)
		return (a);
	else if (a * a < n)
		return (otra(n, ++a));
	return (-1);
}
/**
 * _sqrt_recursion - natural square root of a number
 * @n: variable number integer
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (otra(n, 0));
}
