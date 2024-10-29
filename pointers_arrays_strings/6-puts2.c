#include "main.h"
/**
 *puts2 - entry point
 *@str: fuefb
 *Return: 0 success
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
{
	if (str[i] == 'H' && i != 0)
{
	_putchar('\n');
	return;
}
	_putchar(str[i]);
}
	_putchar('\n');
}
