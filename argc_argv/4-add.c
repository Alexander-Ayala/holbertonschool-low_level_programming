#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argumernt type char
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i, j = 0, n = 0, sum = 0;
for (i = 1; i < argc; i++)
{
while (argv[i][j])
{
if (isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}
n = atoi(argv[i]);
sum = sum + n;
}
printf("%d\n", sum);
return (0);
}
