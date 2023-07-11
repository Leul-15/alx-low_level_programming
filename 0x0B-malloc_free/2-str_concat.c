#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len1)
		{
			str[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (len1 + len2))
		{
			str[i] = s2[j];
			i++;
			j++;
		}
	}
	str[i] = '\0';

	return (str);
}
