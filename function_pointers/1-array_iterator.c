#include"function_pointers.h"
/**
 *array_iterator - execute a function
 *@array: an array
 *@size: size of array
 *@action: pointers to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
	action(array[i]);/*appel de la fonction pointee par action*/
	}
}
