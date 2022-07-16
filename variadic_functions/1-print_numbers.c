#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numberers
 * @separator: pointer
 * @n: number integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list c;
unsigned int i;

va_start(c, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(c, int));
if (separator && i != n)
printf("%s", separator);
}
printf("\n");
va_end(c);
}
