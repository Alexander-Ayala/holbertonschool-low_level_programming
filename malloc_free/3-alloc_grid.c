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
int i, j, a;
int **matrix;
if (height <= 0 || width <= 0)
return (NULL);
matrix = (int **)malloc(height * sizeof(int *));
if (!matrix)
{
free(matrix);
return (NULL);
}
a = 0;
while (a < width)
{
matrix[a] = (int *)malloc(width * sizeof(int));
a++;
free(a);
}
if (width <= 0 || height <= 0)
{
return (NULL);
}
i = 0;
j = 0;
while (i < height)
{
while (j < width)
{
matrix[i][j] = 0;
j++;
}
j = 0;
i++;
}
free(matrix);
return (matrix);
}
