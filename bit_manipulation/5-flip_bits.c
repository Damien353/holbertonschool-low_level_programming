#include "main.h"
/**
 * flip_bits - Retourne le nombre de bits a inverser pour aller de n a m
 * @n: Le premier nombre
 * @m: Le deuxieme nombre
 *
 * Return: Le nombre de bits a inverser
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m; /* XOR entre n et m */
	unsigned int count = 0;

	while (xor_result) /* Tant qu'il y a des bits a verifier */
	{
	count += xor_result & 1;
	/* Si le bit de droite est 1, on incremente le compteur*/
	xor_result >>= 1;
	/* Decale les bits a droite */
	}

	return (count); /* Retourne le nombre de bits differents */
}
