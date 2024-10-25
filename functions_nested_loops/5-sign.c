#include "main.h"
/**
 *print_sign - entry point
 *@n : patata
 *Return : 0 is success
 */
int print_sign(int n)
{
	if (n > 0)
{
		_putchar("+\n");
		return (1);
}
	else if (n == 0)
{
		_putchar("0\n");
		return (0);
}
	else
{
		_putchar("-\n");
		return (-1);
}
}
