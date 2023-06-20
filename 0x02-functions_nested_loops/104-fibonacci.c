#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */
int main(void)
{
	unsigned long int number1, number2, number3, j1, j2, k1, k2;

	number2 = 1;
	number3 = 2;

	printf("%lu", number2);

	for (number1 = 1; number1 < 91; number1++)
	{
		printf(", %lu", number3);
		number3 = number3 + number2;
		number2 = number3 - number2;
	}

	j1 = number2 / 1000000000;
	j2 = number2 % 1000000000;
	k1 = number3 / 1000000000;
	k2 = number3 % 1000000000;

	for (number1 = 92; number1 < 99; ++number1)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	printf("\n");

	return (0);
}
