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
int i;
for (i = 0; c[i] != '\0'; i++)
{
c[i] = toupper(c[i]);
}
return (c);
}
