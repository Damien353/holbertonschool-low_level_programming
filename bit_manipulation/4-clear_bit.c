#include "main.h"
/**
 * clear_bit - Met a 0 la valeur d'un bit a un indice donne
 * @n: Pointeur vers le nombre entier a modifier
 * @index: indice du bit que l'on veut mettre a 0
 *
 * Return: 1 si ça a reussi, -1 en cas d'erreur
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)  /* Verifie si l'indice est valide */
	return (-1);

	mask = 1 << index;  /* Cree un masque avec un 1 a la position 'index' */
	/*Inverse les bits du mask,donc bit a index devient 0,les autres sont1*/
	mask = ~mask;

	/* Applique operation AND binaire pour mettre a 0 le bit a 'index' */
	*n = *n & mask;

	return (1);  /* Retourne 1 pour indiquer que l'operation a reussi */
}
