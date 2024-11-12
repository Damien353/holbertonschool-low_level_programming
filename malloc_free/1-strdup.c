#include "main.h"
#include <stdlib.h>
/**
 *_strdup - return pointer to new allocated memory
 *@str: string
 *Return: 0 success
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0') /*calculer la longueur de len*/
	{
		len++;
	}
	dup_str = (char *)malloc((len + 1) * sizeof(char)); /*allouer memoire pour nouvelle chaine y compris null*/

	if (dup_str == NULL)
	{
		return (NULL);
	}
	/*recopier la memoire la chaine caractere par caractere*/
	for (i = 0; i < len; i++)
	{
		dup_str[i] = str[i];
	}
	dup_str[len] = '\0';
	return (dup_str);
}
