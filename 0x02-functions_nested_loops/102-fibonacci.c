#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int a, b, c, d;

	b = 1;
	c = 2;
	d = 3;

	for (a = 0; a < 50; a++)
	{
		if (a != 49)
			printf("%ld, ", b);
		else
			printf("%ld\n", b);
		d = c + d;
		c = b + c;
		b = d - c;
	}
	return (0);
}
