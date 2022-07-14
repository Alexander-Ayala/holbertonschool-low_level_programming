#include "function_pointers.h"
/*
 * int_index - searches integer
 * @array: elements
 * @size: elemnents array
 * @cmp: comparacion
 * Return: signen 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int n;
if (size > 0 && array && cmp)
{
for (n = 0; n < size; n++)
	if (cmp(array[n]))
		return (n);
}
return (-1);
}
