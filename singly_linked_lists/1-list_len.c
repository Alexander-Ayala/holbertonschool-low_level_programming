#include <stdio.h>
#include "lists.h"
/**
 * print_list - print all elements of list
 * @h: pointer node
 * Return: node
 */
size_t list_len(const list_t *h)
{
unsigned int i;

for (i = 0; h; i++)
{

h = h->next;
}
return (i);
}
