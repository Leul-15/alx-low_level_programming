#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */
void print_most_numbers(void)
{
	int number = 48;

	while (number <= 57)
	{
		if (number != 50 && number != 52)
		{
			_putchar(number);
		}
		number++;
	}
	_putchar('\n');
}
