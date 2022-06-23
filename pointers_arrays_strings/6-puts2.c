#include "main.h"
#include <stdio.h>
/**
* puts2 - print every characte pass in string
* @*str: pointer string
* @str: string
*
**/
void puts2(char *str)
{
int i = 0;
while (*(str + i))
{
if (i % 2 == 0)
{
_putchar(*(str + i));
}
i++;
}
_putchar('\n');
}
