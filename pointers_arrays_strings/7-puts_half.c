#include "main.h"
/**
 *puts_half - entry point
 *@str: erfzf
 *Return: 0 success
 */
void puts_half(char *str)
{
	int length = 0;
	int start;
	int i;

	while (str[length] != '\0')
{
	length++;
}
	if (length % 2 == 0)
{
	start = length / 2;
}
	else
{
	start = (length / 2) + 1;
}
	for (i = start; str[i] != '\0'; i++)
{
	_putchar(str[i]);
}
	_putchar('\n');
}
