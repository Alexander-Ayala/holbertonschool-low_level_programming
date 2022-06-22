#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* Return: 0
*/
void more_numbers(void)
{
int i;
char n;
i = 0;
while (i <= 10)
{
n = '0';
while (n <= 14)
{
_putchar(n);
n++;
}
_putchar('\n');
i++;
}
}
