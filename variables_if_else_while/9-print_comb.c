#include <stdio.h>
/**
 * main - alfabeto minusculas mayusculas
 * 3 putchar
 * Return: zer0
 *
 */
int main(void)
{
int c;
int o = 44;
int s = 32;
for (c = 48; c <= 57; c++)
{
putchar(c);
if (c != 57)
{
putchar(o);
putchar(s);
}
}
putchar('\n');
return (0);
}
