#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatene 2 string
 * @s1: string 1
 * @s2: string 2
 * Return: string conatenada
 */
char *str_concat(char *s1, char *s2)
{
unsigned int len = 0;
char *sc = NULL;
int a, b;
if (s1 == NULL)
	s1 = "";
if (s1 == NULL)
	s2 = "";
len = strlen(s1) + strlen(s2);
sc = malloc(sizeof(*sc) * len + 1);
if (!sc)
	return (NULL);
for (a = 0; s1[a] != '\0'; a++)
	sc[a] = s1[a];
for (b = 0; s2[b] != '\0'; a++, b++)
	sc[a] = s2[b];
sc[a] = '\0';
sc[a + 1] = '\0';
free(sc);
return (sc);
}
