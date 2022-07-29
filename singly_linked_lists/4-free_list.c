#include <stdio.h>
#include "lists.h"
/**
 * free_list - function free list_t
 * @head: double pointer node
 * 
 */
void free_list(list_t *head)
{

list_t *new;
new = head;

if (head)
{
head = head->next;
free(new->str);
free(new);
}
}
