#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number1 = 0, number2 = 1, number = 0;
	int sum = 0;

	while (number < 4000000)
	{
		number = number1 + number2;
		number1 = number2;
		number2 = number;
		if (number % 2 == 0)
			sum += number;
	}
	printf("%i\n", sum);
	return (0);
}
