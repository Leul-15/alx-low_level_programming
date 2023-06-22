#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int number;
	long int max;
	long int i;

	number = 612852475143;
	max = -1;

	while (number % 2 == 0)
	{
		max = 2;
		number /= 2;
	}

	for (i = 3; i <= sqrt(number); i = i + 2)
	{
		while (number % i == 0)
		{
			max = i;
			number = number / i;
		}
	}

	if (number > 2)
		max = number;

	printf("%ld\n", max);

	return (0);
}
