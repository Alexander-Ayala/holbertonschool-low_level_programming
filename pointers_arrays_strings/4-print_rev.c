#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev - print reverse string
* @*s: pointer string
* @s: string
*
**/
void print_rev(char *s)
{
int i = 0;
while (*(s + i))
{
i++;
}
i = i - 1;
while (i >= 0)
{
_putchar(*(s + i));
i--;
}
_putchar('\n');
}
