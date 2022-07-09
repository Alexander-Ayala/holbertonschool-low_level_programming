#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - array integer
 * @min: values min
 * @max: values max
 * Return: Null
 */
int *array_range(int min, int max)
{
int *pointer, i, tam, len;
if (min >= max)
return (NULL);
tam = (max - min);
for (len = 0; len < tam; len++)
	;
pointer = malloc(sizeof(int ) * (len + 1));
if (pointer == NULL)
return (NULL);
for (i = 0; i < len; i++)
{
pointer[i] = min++;
}
return (pointer);
}
