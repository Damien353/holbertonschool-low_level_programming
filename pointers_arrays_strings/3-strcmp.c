#include "main.h"
#include <stddef.h>
/**
 *_strcmp - entry point
 *@s1: string
 *@s2: string
 *Return: 0 success
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
