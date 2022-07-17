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
unsigned int i;
char *s;
va_start(c, format);
while (format && format[i])
}
printf("\n");
va_end(c);
}
