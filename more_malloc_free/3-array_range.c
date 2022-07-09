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
int *pointer, i, tam;
if (min > max)
return (NULL);
tam = (max - min);
pointer = malloc(sizeof(int) * (tam + 1));
if (pointer == NULL)
return (NULL);
for (i = 0; i <= tam; i++)
{
pointer[i] = min++;
}
return (pointer);
}
