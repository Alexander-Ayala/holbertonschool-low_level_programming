#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * alloc_grid - poiter to array bidimensional
 * @width: parameter array bidimensional
 * @height: parameter grid
 * Return: 0 or negative null
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **matrix;
if (height < 1 || width < 1)
return (NULL);
matrix = malloc(height * sizeof(int *));
if (!matrix)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
matrix[i] = malloc(width * sizeof(int));
if (!matrix[i])
{
for (--i; i >= 0; i--)
free(matrix[i]);
free(matrix);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < widht; j++)
{
matrix[i][j] = 0;
}
}
return (matrix);
}
