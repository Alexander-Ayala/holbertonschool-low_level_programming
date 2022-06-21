#include "main.h"

/**
* _isupper - checking lower case
* @c: check character
* Return: (1) lower case, 0 other case
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
