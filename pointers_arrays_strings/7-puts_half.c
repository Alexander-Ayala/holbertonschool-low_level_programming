#include "main.h"
#include <stdio.h>
/**
* puts_half - print second half of the string
* @*str: pointer string
* @str: string
*
**/
void puts_half(char *str)
{
int i, half;
i = 0;
half = 0;
while (*(str + i))
{
i++;
}
if (i % 2 == 0)
{
half = i / 2;
}
else
{
half = (i - 1) / 2;
}
while (half < i)
{
_putchar(*(str + half));
half++;
}
_putchar('\n');
}
