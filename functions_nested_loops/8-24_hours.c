#include "main.h"
/**
 * jack_bauer - prints every minute
 */
void jack_bauer(void)
{
int a, b, c, n, h, m;
for (m = 0; m <= 59; m++)
{
n = (h / 10);
a = (h % 10);
b = (m / 10);
c = (m / % 10);
_putchar(n + 48);
_putchar(a + 48);
_putchar(':');
_putchar(b + 48);
_putchar(c + 48);
_putchar('\n');
}
}
