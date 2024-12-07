#include "main.h"
/**
 * print_binary - Affiche la representation binaire d'un nombre
 * @n: Le nombre a convertir en binaire
 */
void print_binary(unsigned long int n)
{
	int started = 0;/* Variable pour savoir si deja commence a afficher */
	int i;/*index pour parcourir les bits*/
	unsigned long int current_bit;/*variable pour savoir si on affiche*/

	if (n == 0)
	{
	_putchar('0');
	return;
	}

	/*Parcourt les bits de n du plus significatif au moins significatif*/
	for (i = 63; i >= 0; i--)
	{
	current_bit = (n >> i) & 1; /* Decalage pour obtenir le bit actuel */

	/* Afficher le bit s'il est 1 ou si on a deja commence a afficher */
	if (current_bit == 1)
	{
		_putchar('1');
		started = 1;
	}
	else if (started)
	{
		_putchar('0');
	}
	}
}
