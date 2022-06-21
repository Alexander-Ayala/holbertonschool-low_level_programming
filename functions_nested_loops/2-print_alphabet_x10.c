#include "main.h"

/**
* print_alphabet_x10 - print 10 times the alphabet
*/
void print_alphabet_x10(void)
{
int i;
char alph;
i = 1;
while (i < 11)
{
alph = 'a';
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('\n');
i++;
}
}
