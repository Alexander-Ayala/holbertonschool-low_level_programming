#include <stdio.h>
/**
 * main - imprima 100 numbers con 2 digits
 *putchar
 *Return: ALways 0 (Success)
 */
int main(void)
{
int a;
int i;
for (i = 48; i <= 56; i++)
{
for (a = 49; a <= 57; a++)
{
if (a > i)
{
putchar(i);
putchar(a);
if (i != 56 || a != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
