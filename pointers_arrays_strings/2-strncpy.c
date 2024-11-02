#include "main.h"
#include <stddef.h>
/**
 *_strncpy - entry point
 *@dest: string
 *@src: string
 *@n: caractere
 *Return: 0 success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
