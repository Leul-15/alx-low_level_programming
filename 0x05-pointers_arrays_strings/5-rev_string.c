#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	char rev;
	int i, counter, len;

	counter = 0;
	len = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	len = counter - 1;

	for (i = 0; i < counter / 2; i++)
	{
		rev = s[i];
		s[i] = s[len];
		s[len--] = rev;
	}
}
