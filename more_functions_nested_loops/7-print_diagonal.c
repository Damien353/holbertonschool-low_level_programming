#include "main.h"
/**
 *print_diagonal - entry point
 *@n: fref
 *Return: 0 success
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
{
	for (j = 0; j < i; j++)
{		
	_putchar('\\');
}
	_putchar ('\n');
}
}
