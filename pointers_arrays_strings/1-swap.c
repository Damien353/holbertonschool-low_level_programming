#include "main.h"
/**
 *swap_int - entry point
 *@a: integer
 *@b: integer
 *Return: 0 success
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
