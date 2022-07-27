#include <stdio.h>
#include "lists.h"
/**
 * print_list - print all elements of list
 * @h: pointer node
 * Return: node
 */
size_t print_list(const list_t *h)

{
	int i = 0;
	const list_t *s;
	
	s = h;
	if (s == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%u] %s\n", s->len, s->str);
	s = s->next;
	i++;
	}
	return(i);

}
