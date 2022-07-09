#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - 2 string
 * @s1: poiter string 1
 * @s2: poiter string 2
 * @n: number bytes
 * Return: string conatenada
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a, b, len = 0;
char *sc = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (strlen(s2) <= n)
n = strlen(s2);
len = strlen(s1) + n;
sc = malloc(sizeof(*sc) * len + 1);
if (!sc)
return (NULL);
for (a = 0; s1[a] != '\0'; a++)
sc[a] = s1[a];
for (b = 0; s2[b] ! = '\0' && a < len; a++, b++)
sc[a] = s2[b];
sc[a + 1] = '\0';
return (sc);
}
