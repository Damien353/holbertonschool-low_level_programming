#include"function_pointers.h"
/**
 *int_index - cherche un entier
 *@array: array
 *@size: nombre d'elements
 *@cmp: pointeur de fonction pour comparer valeur
 *Return: always 0 si faux
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;/*pour parcourir le tableau*/

	if (size <= 0)/*verifier si size est valide*/
	{
		return (-1);
	}
	for (i = 0; i < size; i++)/*on parcourt le tableau*/
	{
		if(cmp(array[i]) != 0)/*on utilise fonction cmp pour comparer valeur*/
		{
			return (i);/*retourne l'indice si cmp retourne pas 0*/
		}
	}
	return (-1);/*retourne -1 si aucun element correspond*/
}
