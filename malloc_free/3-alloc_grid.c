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
if (height <= 0 || width <= 0)
return (NULL);
matrix = malloc(height * sizeof(int));
if (!matrix)
{
free(matrix);
return (NULL);
}
for (i = 0; i < height; i++)
{
matrix[i] = malloc(width * sizeof(int));
if (!matrix)
{
free(matrix);
return (NULL);
}
for (j = 0; j < width; j++)
{
matrix[i][j] = 0;
}
}
return (matrix);
free(matrix);
}
