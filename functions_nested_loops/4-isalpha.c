#include "main.h"

/**
* _isalpha - checking lower and upper case
* @c: check character
* Return: (1) lower case, 0 other case
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
