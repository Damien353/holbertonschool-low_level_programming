#include "main.h"
/**
 *_strcpy - entry point
 *@dest: tampon
 *@src: pointeur
 *Return: 0 success
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (src != '\0')
{
	*dest = *src;
	dest++;
	src++;
}
	*dest = '\0';
	return (original_dest);
}
