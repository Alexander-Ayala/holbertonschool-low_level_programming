#include "main.h"
#include <stdio.h>
/**
* _strcpy - copy string source to a dest
* @dest: destination copy
* @src: source string initial
* Return: dest array in pointer
**/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*(src + i))
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
