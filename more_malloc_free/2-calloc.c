#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number bytes
 * @size: len bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, tam;
char *pointer;
if (nmemb == 0 || size == 0)
return (0);
tam = (nmemb * size);
pointer = malloc(tam);
if (pointer == 0)
return (0);
for (i = 0; i < tam; i++)
{
pointer[i] = 0;
}
return (pointer);
}
