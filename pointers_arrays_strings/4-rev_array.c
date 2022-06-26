#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* reverse_array - print reverse
* @*a: pointer array
* @n: matrix
*@a: var array
**/
void reverse_array(int *a, int n)
{
int i = 0;
int t;
n = n - 1;
while (i < n)
{
t = *(a + i);
*(a + i) = *(a + n);
*(a + n) = t;
i++;
n--;
}
}
