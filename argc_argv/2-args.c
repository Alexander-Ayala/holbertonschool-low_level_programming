#include <stdio.h>
/**
 * main - prints arguments
 * @argc: arguments
 * @argv: array
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n  < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
