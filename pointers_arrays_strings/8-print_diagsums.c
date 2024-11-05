#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints sum of two diagonals of a square matrix of integers
 *@a: diagonale
 *@size: diagonale
 *Return: 0 success
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;
/*parcourt les elements des deux diagonales*/
	for (i = 0; i < size; i++)
{
	sum1 +=	*(a + i * size + i); /*parcourt la premiere diagonale (i, i)*/
	sum2 += *(a + i * size + (size - i - 1)); /* parcourt la deuxieme diagonale (i, size - i - 1)*/
}
		printf("%d, %d\n", sum1, sum2); /*affiche la somme des deux diagonales*/
}
