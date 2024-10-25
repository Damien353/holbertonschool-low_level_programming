#include "main.h"
/**
 *print_last_digit - entry point
 *@r: efhezof
 *Return: 0 is success
 */
int print_last_digit(int r)
{
	int b = (r % 10);

	if (b < 0)
{
	(b = -b);
}
{
	_putchar("%d\n", b);
}
	return (b);
}
