#include "main.h"
#include <stddef.h>
/**
 *string_toupper - entry point
 *@str: string
 *Return: 0 success
 */
char *string_toupper(char *str)
{
	char *original = str;


	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - ('a' - 'A');
	}
		str++;
	}
	return (original);
}
