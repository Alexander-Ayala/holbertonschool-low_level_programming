#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* Return: 0
*/
void more_numbers(void)
{
int i;
int n;
i = 0;
while (i <= 10)
{
n = 48;
while (n < 57)
{
_putchar(n);
n++;
}
_putchar('\n');
i++;
}
}
