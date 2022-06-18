#include <stdio.h>
/**
 * main - alfabeto minusculas mayusculas
 * 3 putchar
 * Return: zero
 *
 */
int main(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
