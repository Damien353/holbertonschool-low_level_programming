#include "main.h"
/**
 * get_bit - Retourne la valeur d'un bit a un indice donne
 * @n: Le nombre entier a examiner
 * @index: indice du bit que l'on veut recuperer
 *
 * Return: La valeur du bit a l'indice specifie (0 ou 1), ou -1 en cas d'erreur
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;/* Declaration du masque */
    
	if (index > 63)
	/*Si indice est invalide(au dela de la taille d'un unsigned long int)*/
	return (-1);

	mask = 1 << index;/*Cree un masque avec un 1 a la position 'index'*/
	return ((n & mask) >> index);
	/*Masque n pour isoler le bit a 'index' et decale vers la droite*/
}
