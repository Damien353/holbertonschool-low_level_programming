#include "main.h"
#include <stdlib.h>
/**
 *array_range - create array of integers
 *@min: min value
 *@max: max value
 *Return: 0 success
 */
int *array_range(int min, int max)
{
	int size = max - min + 1;/*pour calculer la taille du tableau*/
	int *array;
	int i;

	if (min > max)
	{
	return (NULL);
	}
	/*allouer memoire pour le tableau*/
	array = (int *)malloc(size * sizeof(int));

	if (array == NULL)
	{/*si malloc echoue on retourne null*/
		return (NULL);
	}
	for (i = 0; i < size; i++)/*on remplit le tableau avec valeur min a max*/
	{
		array[i] = min + i;
	}
	return (array);
}
