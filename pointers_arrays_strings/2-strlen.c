#include "main.h"
/**
 *_strlen - entry point
 *@s: fezihfa
 *Return: 0 success
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
{
	length++;
	s++;
}
	return (length);
}
