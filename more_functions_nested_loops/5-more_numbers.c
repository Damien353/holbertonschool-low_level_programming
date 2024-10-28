#include "main.h"
/**
 *more_numbers - entry point
 *@i: nombres
 *@n: lignes
 *Return: 0 success
 */
void more_numbers(void)
{
	int i;
	int n;

	for (n = 0; n <= 10; n++)
{
	for (i = 0; i <= 14; i++)
{
		_putchar(i + '0');
}
		_putchar('\n');
}
	return (0);
}
