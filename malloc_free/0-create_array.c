#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *create_array - creer une chaine de caractere
 *@size: size of memory to print
 *@c: caractere
 *Return: 0 success
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array = (char *)malloc(size * sizeof(char)); /*allocation memoire pour le tableau de size*/

	if (array == NULL) /*si allocation echoue retourne NULL*/
	{
		return (NULL);
	}
	memset(array, c, size); /*initialiser le tableau avec le caractere c*/
	return (array); /*retourner le pointeur vers le tableau alloue et initialise*/
}
