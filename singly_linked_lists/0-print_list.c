#include <stdio.h>
#include "lists.h"
/**
 * print_list - print all elements of list
 * @h: pointer node
 * Return: node
 */
size_t print_list(const list_t *h)
{
int i;
const list_t *s;
s = h;
for (i = 0; s; i++)
{
if (s == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", s->len, s->str);
s = s->next;
}
return (i);
}
