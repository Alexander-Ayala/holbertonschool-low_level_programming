#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * cap_string - palabras con mayusculas
 * @c: string uppercase
 * Return:  uppercase
 */
char *cap_string(char *c)
{
	int i, j;
	char ch[13] = {' ', '\t', '\n', ',', ';', '.',
	'!', '?', '"', '(', ')', '{', '}'};
	for (i = 0; c[i] != '\0'; i++)
	{
	if (i == 0 && c[i] >= 'a' && c[i] <= 'z')
	c[i] -= 32;
	for (j = 0; j < 13; j++)
	{
	if (c[i] == ch[j])
	{
	if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
	{
	c[i + 1] -= 32;
	}
	}
	}
	}
	return (c);
}
