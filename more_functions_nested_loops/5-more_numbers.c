#include "main.h"
/**
 *more_numbers - entry point
 *
 *
 *Return: 0 success
 */
void more_numbers(void)
{
	int i;
	int n;

	for (n = 0; n < 10; n++)
{
	for (i = 0; i <= 14; i++)
{
	if (i >= 10)
{
		_putchar((i / 10) + '0');
}
		_putchar((i % 10) + '0');
}
		_putchar('\n');
}
}
