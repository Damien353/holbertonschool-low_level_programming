#include "main.h"
/**
 *print_rev - entry point
 *@s: fzf
 *Return: 0 success
 */
void print_rev(char *s)
{

	int length = strlen(s);
	int i;

	for (i = length - 1; i => 0; i--)
{
	_putchar(s[i]);
}
	_putchar('\n');
}
