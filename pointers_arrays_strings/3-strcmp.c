#include "main.h"
#include <stdio.h>
/**
* _strcmp - comparar two strings
* @s2: destination
* @s1: source string initial
* Return: dest
**/
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
{
i++;
}
return (*(s1 + i)-*(s2 + i));
}
