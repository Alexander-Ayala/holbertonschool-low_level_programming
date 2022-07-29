#include <stdio.h>
#include "lists.h"
/**
 * add_node - add new node benning of list_t
 * @head: double pointer node
 * @str: pointer string
 * Return: adddres or null
 */
list_t *add_node(list_t **head, const char *str)
{

unsigned int len;
list_t *newnode;
newnode = malloc(sizeof(list_t));
if (!new)
return (NULL);
newnode->str = strdup(str);

for (len = 0; str[len]; len++)
;

newnode->len = len;
newnode->next = (*head);
(*head) = newnode;

return (*head);
free(*head);
}
