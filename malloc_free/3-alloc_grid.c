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
matrix = (int **) malloc(width * sizeof(int *));
a = 0;
while (a < width)
{
matrix[a] = (int *) malloc(height * sizeof(int));
a++;
}
if (width <= 0 || height <= 0)
return (0);
i = 0;
j = 0;
while (i < width)
{
while (j < height)
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
