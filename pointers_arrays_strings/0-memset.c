#include "main.h"
/**
 * _memset - consttant byte memory
 * @s: poiter character
 * @b: character b
 * @n: n times
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
