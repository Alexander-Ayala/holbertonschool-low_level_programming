#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *
 * string_toupper - alphabet minusculkas a mayusculas
 * @s: string alphabet
 * Return: Alphabet uppercase
 */
char *cap_string(char *c)
{
int i;
for (i = 0; c[i] != '\0'; i++)
{
c[i] = toupper(c[i]);
}
return (c);
}
