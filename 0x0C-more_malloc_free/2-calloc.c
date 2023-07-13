#include "main.h"
#include <stdlib.h>
/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *str = s;

	while (n--)
		*s++ = b;
	return (str);
}
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *n;

	if (size == 0 || nmemb == 0)
		return (NULL);
	n = malloc(nmemb * size);
	if (n == 0)
		return (NULL);
	_memset(n, 0, nmemb * size);
	return (n);
}
