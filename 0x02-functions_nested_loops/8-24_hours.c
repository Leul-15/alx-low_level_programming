#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{

int hour1;
int hour2;
int minute1;
int minute2;
int a = 9;

hour2 = 0;
while (hour2 <= 2)
{
	if (hour2 == 2)
	{
		a = 3;
	}
	hour1 = 0;
	while (hour1 <= a)
	{
		minute2 = 0;
		while (minute2 <= 5)
		{
			minute1 = 0;
			while (minute1 <= 9)
			{
				_putchar('0' + hour2);
				_putchar('0' + hour1);
				_putchar(':');
				_putchar('0' + minute2);
				_putchar('0' + minute1);
				_putchar('\n');
				minute1++;
			}
			minute2++;
		}
		hour1++;
	}
	hour2++;
}

}
