#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: pointer
 */
void print_all(const char * const format, ...)
{
va_list c;
unsigned int i, a;
char *s;
va_start(c, format);
while (format && format[i])
{
if (a)
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", va_arg(c, int));
break;
case 'i':
printf("%d", va_arg(c, int));
break;
case 'f':
printf("%f", va_arg(c, double));
break;
case 's':
s = va_arg(c, char *);
if (s)
{
printf("%s", s);
break;
}
printf("%p", s);
break;
default:
a = 0;
i++;
continue;
}
a = 1;
i++;
}
printf("\n");
va_end(c);
}
