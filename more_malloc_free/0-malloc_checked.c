#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - asigna memory
 * @b: variable allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
void *c;
c = malloc(b);
if (c == NULL)
{
	printf("%d", 98);
}
return (c);
}