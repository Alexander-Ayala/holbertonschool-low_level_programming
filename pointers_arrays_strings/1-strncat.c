#include "main.h"
#include <stdio.h>
/**
* _strncat - concatenates two strings
* @dest: destination
* @src: source string initial
*@n: espacio de cararcter
* Return: dest
**/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (*(dest + i))
{
i++;
}
while (j < n && *(src + j))
{
*(dest + i) = *(src + j);
i++;
j++;
}
return (dest);
}
