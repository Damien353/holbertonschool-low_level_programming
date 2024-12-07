#include "main.h"
/**
 * set_bit - Met a 1 la valeur d'un bit a un indice donne
 * @n: Pointeur vers le nombre entier a modifier
 * @index: Indice du bit que l'on veut mettre a 1
 *
 * Return: 1 si ça a reussi, -1 en cas d'erreur
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)  /* Verifie si l'indice est valide */
	return (-1);

	*n = *n | (1 << index);
	/*Cree masque avec un 1 a position 'index' et applique operation OR*/

	return (1);/* Retourne 1 pour indiquer que l'operation a reussi */
}
