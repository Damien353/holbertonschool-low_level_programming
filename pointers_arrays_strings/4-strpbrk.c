#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - entry point
 *@s: string
 *@accept: string
 *Return: 0 success
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	/*parcourt caractere de la chaine s*/
	while (*s)
	{
	/*parcourt chaque caractere de la chaine accept*/
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
