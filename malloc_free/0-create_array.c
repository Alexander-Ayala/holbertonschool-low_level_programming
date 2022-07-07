#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * create_array -  specific char
 * @*pt: pointer
 * @c: characte
 * @size: length character
 * Return: pt
 */
char *create_array(unsigned int size, char c)
{
unsigned int a;
char *pt = NULL;
pt = malloc(sizeof(char) * size);
if (!pt || size == 0)
	return (NULL);
for (a = 0; a < size; a++)
	pt[a] = c;
return (pt);
free(pt);
}
