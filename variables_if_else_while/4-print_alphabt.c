#include <stdio.h>
/**
* main - alfabeto minusculas excepto e y q
* 3 putchar
* Return: zero
*
*/
int main(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
putchar(c);
}
putchar('\n');
return (0);
}
