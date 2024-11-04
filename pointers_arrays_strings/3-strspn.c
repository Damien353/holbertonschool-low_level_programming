#include "main.h"
/**
 *_strspn - entry point
 *@s: string
 *@accept: string
 *Return: 0 success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0; /*compteur pour la longueur du prefixe*/
	int found;
	char *a;

	while (*s) /*boucle sur chaque caractere de s*/
	{
		found = 0; /* reinitialiser trouve pour chaque caractere de s*/
	/* verifie si le caractere courant de s est dans accept*/
		for (a = accept; *a; a++)
		{
			if (*s == *a)
		{
			found = 1; /*caractere trouve dans accept*/
			break; /*sort de la boucle de accept*/
		}
		}
		if (!found)
		{
			break; /*arrete la boucle si pas trouve*/
		}
		count++; /*incremente le compteur pour le prefixe valide*/
		s++; /*passe au caractere suivant dans s*/
	}
	return (count);
}
