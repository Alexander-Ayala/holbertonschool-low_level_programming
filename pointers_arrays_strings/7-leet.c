#include "main.h"

/**
 * leet - codiing string 1337
 * @c: string
 * Return: coding c
 */
char *leet(char *c)
{
	int i, j;

	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == x[j])
			{
				c[i] = y[j];
			}
		}
	}
	return (c);
}
