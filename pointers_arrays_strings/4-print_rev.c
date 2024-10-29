#include "main.h"
#include <string.h>
/**
 *print_rev - entry point
 *@s: fzf
 *Return: 0 success
 */
void print_rev(char *s)
{

	int length = 0;
	int i;

	while (s[length] != '\0')
{
	length++;
}
	for (i = length - 1; i >= 0; i--)
{
	_putchar(s[i]);
}
	_putchar('\n');
}
