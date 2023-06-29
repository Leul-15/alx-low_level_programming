#include "main.h"
/**
 * string_toupper - change all lowercase letter string to uppercase
 * @s: string to modify
 *
 * Return: resulting string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 32;
	}
	return (s);
}
