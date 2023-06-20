#include <stdio.h>
#include <stdlib.h>
/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 if succesful
 */
int main(void)
{
	int number = 0;
	int sum = 0;

	while (number < 1024)
	{
		if (number % 3 == 0 || number % 5 == 0)
		{
			sum += number;
		}

		number++;
	}
	printf("%i\n", sum);
	return (0);
}
