#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: pointer
 * @n: numbers strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list c;
unsigned int i;
char *s;
va_start(c, n);
for (i = 0; i < n; i++)
{
s = va_arg(c, char *);
if (!s)
printf("(nil)");
else
{
printf("%s", s);
if (separator != NULL && i != n - 1)
printf("%s", separator);
}
}
printf("\n");
va_end(c);
}
