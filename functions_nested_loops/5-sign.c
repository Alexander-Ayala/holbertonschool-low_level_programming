#include "main.h"

/**
* print_sign - that prints the sign of a numbe
* @n: check int
* Return: 1 and prints + if n is greater than zer
* 0 and prints 0 if n is zero,
*-1 and prints - if n is less than zero
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
