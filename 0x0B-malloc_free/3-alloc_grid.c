#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
int i, j, k;
int **p;
if (width < 1 || height < 1)
return (NULL);
p = malloc(sizeof(int *) * height);
if (p == NULL)
{
free(p);
return (NULL);
}
for (i = 0; i < height; i++)
{
p[i] = malloc(sizeof(int) * width);
if (p[i] == NULL)
{
for (; i >= 0 ; i--)
{
free(p[i]);
}
free(p);
return (NULL);
}
}
for (j = 0; j < height; j++)
{
for (k = 0; k < width; k++)
{
p[j][k] = 0;
}
}
return (p);
}
