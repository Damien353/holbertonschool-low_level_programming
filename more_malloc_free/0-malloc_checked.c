#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocate memory
 *@b: integer
 *Return: 0 success
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

