#include "main.h"
#include <stdio.h>
/**
* _strncpy - copy string
* @dest: destination copy
* @src: source string initial
* Return: dest array in pointer
* @n: numero bytes copiar
**/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && *(src + i))
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
