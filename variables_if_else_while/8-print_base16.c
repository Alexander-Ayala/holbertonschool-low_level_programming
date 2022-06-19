#include <stdio.h>
/**
 *main - hexadecimal
 * desde 0
 *Return: 0
 *
 */
int main(void)
{
int i = 0;
while (i <= 16)
{
printf("%x", i);
i = i + 1;
}
printf("\n");
return (0);
}
