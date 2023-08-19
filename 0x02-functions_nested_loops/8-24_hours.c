#include "main.h"
/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			print_time(hour, minute);
		}
	}
}
/**
 * print_time - function that prints time
 * @hour: the hours to be printed
 * @minute: the minute to be printed
*/
void print_time(int hour, int minute)
{
	_putchar('0' + hour / 10);
	_putchar('0' + hour % 10);
	_putchar(':');
	_putchar('0' + minute / 10);
	_putchar('0' + minute % 10);
	_putchar('\n');
}
