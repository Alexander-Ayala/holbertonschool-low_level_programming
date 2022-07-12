#include "main.h"
/**
 * times_table - 9 times table
 */
void times_table(void)
{
int mul, num, x;
for (num = 0; num <= 9; num++)
{
_putchar('0');
for (x = 1; x <= 9; x++)
{
_putchar(',');
_putchar(' ');
mul = (num * x);
if (mul < 10)
_putchar(' ');
else
_putchar((mul / 10) + 48);
_putchar((mul % 10) + 48);
}
_putchar('\n');
}
}
