#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - poiter
 * @str: argumen string
 * Return: string copy
 */
char *_strdup(char *str)
{
unsigned int i = 0;
char *scpy = NULL;
scpy = malloc(sizeof(str));
if (scpy == NULL)
	return (NULL);
i = 0;
while (str[i] != '\0')
{
scpy[i] = str[i];
i++;
}
return (scpy);
free(scpy);
}
