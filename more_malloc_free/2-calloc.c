#include "main.h"
#include <stdlib.h>
/**
 *_calloc - allocate mmemory for array
 *@nmemb: array
 *@size: size
 *Return: 0 success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);
	/*initialise la memoire allouee a zero*/
	for (i = 0; i < nmemb * size; i++)
	((char *)ptr)[i] = 0;
	return (ptr);
}

