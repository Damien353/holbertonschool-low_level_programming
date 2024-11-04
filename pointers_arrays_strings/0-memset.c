#include "main.h"
/**
 *_memset - entry point
 *@s: zone de memoire
 *@b: byte constant
 *@n: first byte
 *Return: 0 success
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr++ = b;
	}
	return (s);
}
