#include "main.h"
/**
 *reverse_array - entry point
 *@a: entier
 *@n: entier
 *Return: 0 success
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n -1;
	int temp;

	while (start < end)
	{
		temp = start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
