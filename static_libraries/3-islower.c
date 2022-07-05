#include "main.h"

/**
* _islower - checking lower case
* @c: check character
* Return: (1) lower case, 0 other case
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
