#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches string byte
 * @s: string
 * @accept: string accept
 * Return: a pointer string
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i]; i++)
{
	for (j = 0; accept[j]; j++)
		if (s[i] == accept[j])
		{
			s = s + i;
			return (s);
		}
}
return (0);
}
