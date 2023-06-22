#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int number = 1, i;

	while (number <= size && size > 0)
	{
		i = 0;
		while (i < size - number)
		{
			_putchar(' ');
			i++;
		}
		i = 0;
		while (i < number)
		{
			_putchar('#');
			i++;
		}

		_putchar('\n');
		number++;
		}

	}

}
