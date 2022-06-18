#include <stdio.h>
/**
 * main - alfabeto minusculas mayusculas
 * 3 putchar
 * Return: zero
 *
 */
int main(void)
{
char c;
char C;
for (c = 'a'; c <= 'z'; c++)
for (C = 'A'; C <= 'Z'; C++)
{
putchar(c);
putchar(C);
}
putchar('\n');
return (0);
}
