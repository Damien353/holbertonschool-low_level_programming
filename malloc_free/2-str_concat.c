#include "main.h"
#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1: string 1
 *@s2: String 2
 *Return: 0 success
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i, j;
	char *result;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0'){
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0'){
		len2++;
	}
	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL){
		return (NULL);
	}
	i = 0;
	while (i < len1){
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2){
		result[i + j] =s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
