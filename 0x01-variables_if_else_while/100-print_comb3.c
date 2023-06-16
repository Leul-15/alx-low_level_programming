#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number1, number2, number3;

	number1 = 0;

	while (number1 < 100)
	{
		number2 = number1 % 10;
		number3 = number1 / 10;

		if (number3 < number2)
		{
			putchar(number3 + '0');
			putchar(number2 + '0');

			if (number1 < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		number1++;
	}
	putchar('\n');

	return (0);
}
