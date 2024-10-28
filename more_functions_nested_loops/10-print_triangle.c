#include "main.h"
/**
 *print_triangle - entry point
 *@size: fref
 *Return: 0 success
 */
void print_triangle(int size)
{

	int i;
	int j;
	int k;

	if (size <= 0)
{
	_putchar('\n');
}
	for (i = 1; i <= size; i++)
{
	for (j = size - i; j > 0; j--)
{
	_putchar(' ');
}
	for (k = 0; k < i; k++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
