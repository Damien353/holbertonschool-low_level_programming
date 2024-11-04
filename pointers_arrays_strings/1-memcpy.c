#include "main.h"
/**
 *_memcpy - entry point
 *@dest: memory area
 *@src: memory area
 *@n: byte
 *Return: 0 success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
