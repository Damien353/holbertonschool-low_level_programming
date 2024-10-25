#include "main.h"
/**
 *jack_bauer - entry point
 *
 *Return: 0 is success
 */
void jack_bauer(void)
{
	int hour;
	int minut;

	for (hour = 0; hour < 24; hour++)
{
	for (minut = 0; minut < 60; minut++)
{
	_putchar(hour / 10);
	_putchar(hour % 10);
	_putchar(':');
	_putchar(minut / 10);
	_putchar(minut % 10);
	_putchar('\n');
}
}
}
