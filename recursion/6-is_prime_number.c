#include "main.h"
/**
 * is_prime_number - function
 * @n: integer
 * @a: rpimo
 * Return: number primo
 */
int primo(int n, int a);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primo(n, n - 1));
}
/**
 * primo - function
 * @n: variable integer
 * @a: variable value
 * Return: primo
 */
int primo(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (primo(n, a - 1));
}
