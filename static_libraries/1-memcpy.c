#include "main.h"
/**
 * _memcpy - function copies memory
 * @dest: dstination
 * @src: desde copy area
 * @n: variable bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
