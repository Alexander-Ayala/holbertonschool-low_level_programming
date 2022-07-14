#include "function_pointers.h"
#include <stddef.h>
/**
 *print_name - print name function
 *@name: name person
 *@f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
	f(name);
}
