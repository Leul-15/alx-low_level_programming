#include "main.h"
/**
 * _islower - Check description
 * Description: It print the alphabet if it is upper 0 and if the lower 1
 * @c: The character it hold the alphabet
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
