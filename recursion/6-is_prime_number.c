#include "main.h"
/**
 * is_prime_number - function
 * @n: integer
 * @a: rpimo
 * Return: number primo
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (otra(n, n - 1));
}
/**
 * otra - function
 * @n: variable integer
 * @a: variable value
 * Return: otra
 */
int otra(int n int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (otra(n, a - 1));
}
