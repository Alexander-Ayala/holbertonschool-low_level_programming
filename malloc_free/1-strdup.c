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
unsigned int i = 0, len;
char *scpy = NULL;
len = strlen(str);
scpy = malloc(sizeof(char) * len + 1);
if (scpy == NULL || str == NULL)
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
