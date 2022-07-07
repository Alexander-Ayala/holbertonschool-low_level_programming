#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* rev_string - print reverse
* @*s: pointer string
* @s: string
*
**/
void rev_string(char *s)
{
int i = 0;
int j = 0;
char ch[1000];
while (*(s + i))
{
*(ch + i) = *(s + i);
i++;
}
i = i - 1;
while (i >= 0)
{
*(s + i) = *(ch + j);
}
}
