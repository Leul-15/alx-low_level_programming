#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *m;
	int i;

	if (min > max)
		return (NULL);
	m = malloc((max - min + 1) * sizeof(int));
	if (m == 0)
		return (NULL);
	for (i = 0; min + i <= max; i++)
		m[i] = min + i;
	return (m);
}
