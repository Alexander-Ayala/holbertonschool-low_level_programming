#include "main.h"

/**
* _isdigit - checking digit 0 9
* @c: check character
* Return: (1) lower case, 0 other case
*/
int _isdigit(int c)
{
if (c <= '9' && c >= '0')
{
return (1);
}
else
{
return (0);
}
}
