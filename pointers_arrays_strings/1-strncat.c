#include "main.h"
/**
 *_strncat - entry point
 *@dest: string
 *@src: string
 *@n: caractere
 *Return: 0 success
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest)
	{
		dest++;
	}
	while (n > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	dest = '\0';
	return (start);
}
