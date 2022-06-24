#include "main.h"
#include <stdio.h>
/**
* _strcat - concatenates two strings
* @dest: destination 
* @src: source string initial
* Return: dest
**/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (*(dest + i))
{
i++;
}
 while ((*(dest + i) = *(src + j)))
{
i++;
j++;
}
return (dest);
}
