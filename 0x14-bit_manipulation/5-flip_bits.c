#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num, c = 0;

	unsigned long int ct;

	unsigned long int e = n ^ m;

	for (num = 63; num >= 0; num--)
	{
		ct = e >> num;
		if (ct & 1)
			c++;
	}

	return (c);
}
