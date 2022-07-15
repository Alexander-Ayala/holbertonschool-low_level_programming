#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - operator sum
 * @a: num1
 * @b: num2
 * Return: operation
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - operator sum
 * @a: num1
 * @b: num2
 * Return: operation
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - operator sum
 * @a: num1
 * @b: num2
 * Return: operation
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - operator sum
 * @a: num1
 * @b: num2
 * Return: operation
 */
int op_div(int a, int b)
{
if (b)
{
return (a / b);
}
else
{
printf("Error\n");
exit(100);
}
}
/**
 * op_mod - operator sum
 * @a: num1
 * @b: num2
 * Return: operation
 */
int op_mod(int a, int b)
{
if (b)
{
return (a % b);
}
else
{
printf("Error\n");
exit(100);
}
}
