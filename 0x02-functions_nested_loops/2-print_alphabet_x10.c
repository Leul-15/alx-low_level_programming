#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: It prints the alphabet
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char ch;
	int count;

	count = 0;

	while (count < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		count++;
	}
}
