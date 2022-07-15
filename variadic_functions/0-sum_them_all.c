#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum parameters
 * @n: const integer
 * Return: zero
 */
int sum_them_all(const unsigned int n, ...)
{
va_list c;
unsigned int sum, i;
if (!n)
return (0);
va_start(c, n);
sum = 0;
for (i = 0; i < n; i++)
sum += va_arg(c, int);
va_end(c);
return (sum);
}
