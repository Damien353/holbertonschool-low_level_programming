#include "main.h"
#include <stdlib.h>
/**
 *create_array - creer une chaine de caractere
 *@size: size of memory to print
 *@c: caractere
 *Return: 0 success
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(size * sizeof(char)); /*allocation memoire pour le tableau de size*/

	if (array == NULL) /*si allocation echoue retourne NULL*/
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array); /*retourner le pointeur vers le tableau alloue et initialise*/
}

