#include "function_pointers"
/**
 *print_name - print name function
 *@name: name person
 *@f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
int a;
if (name || f)
	f(name);
}
