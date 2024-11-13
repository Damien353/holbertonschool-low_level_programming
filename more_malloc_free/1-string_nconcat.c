#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: caractere
 *Return: 0 success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	unsigned int i = 0;
	unsigned int j = 0;
	char *result;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len_s1] != '\0') /*calcul la longueur s1*/
		len_s1++;
	while (s2[len_s2] != '\0') /*pour s2*/
		len_s2++;
	if (n >= len_s2)
		n = len_s2;
	/*on alloue la memoire necessaire*/
	result = (char *)malloc(sizeof(char) * (len_s1 + n + 1));

	if (result == NULL)
		return (NULL);

	while (i < len_s1)
	{/*copie s1 dans result*/
	result[i] = s1[i];
	i++;
	}

	while (j < n)
	{/*copie premiers n caracteres de s2 dans result*/
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0'; /*ajout caractere null a la fin*/
	return (result);
}

