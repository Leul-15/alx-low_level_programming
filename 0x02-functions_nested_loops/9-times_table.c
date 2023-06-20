#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{

int number1 = 0, number2, k;

while (number1 <= 9)
{
	number2 = 0;
	while (number2 <= 9)
	{
		k = number1 * number2;
		if (number2 == 0)
		{
			_putchar('0' + k);
		}
		else if (k < 10)
		{
			_putchar(' ');
			_putchar('0' + k);
		}
		else
		{
			_putchar('0' + k / 10);
			_putchar('0' + k % 10);
		}

		if (number2 < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		number2++;
	}
	_putchar('\n');
	number1++;
}

}
