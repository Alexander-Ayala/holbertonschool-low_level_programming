#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _puts_recursion - print string
 * @s: string
 * Return: string
 */
void _puts_recursion(char *s)
{
if (!s || !*s)
{
	_putchar('\n');
	return ();
}
_putchar(*s);
_puts_recursion(s + 1);
}
