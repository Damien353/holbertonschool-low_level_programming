#include "main.h"
/**
 *_memset - entry point
 *@s: zone de memoire
 *@b: byte constant
 *@n: first byte
 *Return: 0 success
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s; //cree un pointeur qui pointe vers le debut de la zone me√moir

			//utilise le pointeur pour remplir n bytes
	while (n--)
	{
		*ptr++ = b; //remplit le byte courant avec b et incremente le pointeur
	}
	return s; // retourne le pointeur original
}
