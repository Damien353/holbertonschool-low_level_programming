#include<stdlib.h>
#include"function_pointers.h"
/**
 *array_iterator - execute a function
 *@array: an array
 *@size: size of array
 *@action: pointers to function
 *Return: always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	{	
		return;
	}
	for (size_t i = 0; i < size; i++)
	{
		action(array[i]); /*appel de la fonction pointee par action*/
	}
}
