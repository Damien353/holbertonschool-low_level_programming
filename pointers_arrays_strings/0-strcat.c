#include "main.h"
/**
 *_strcat - entry point
 *@dest:
 *@src:
 *Return: 0 success
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
{
	dest++;
}
	while(*src)
{
	*dest = *src;
	dest++;
	src++;
}
	*dest = '\0'
	return (dest);
}
