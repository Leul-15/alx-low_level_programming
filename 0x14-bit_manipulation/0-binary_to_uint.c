#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int count;

	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (b[count] - '0');
	}

	return (decimal_value);
}
