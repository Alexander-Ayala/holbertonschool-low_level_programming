#include <stdio.h>
/**
 * main - imprima alfabeto
 * 2 putchar
 * Return: zero
 *
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
