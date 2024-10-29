#include "main.h"
/**
 *_puts - entry point
 *@str: gerijgze
 *Return: 0 success
 */
void _puts(char *str)
{
	while (*str != '\0')
{
	_putchar(*str);
	str++;
}
	_putchar('\n');
}
