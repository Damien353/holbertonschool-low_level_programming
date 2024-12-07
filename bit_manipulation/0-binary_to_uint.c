#include"main.h"
/**
 *binary_to_uint - Convertit une chaine binaire en un entier non signe
 *@b: la chaine contenant le nombre binaire
 *Return: Le nombre converti ou 0 si b = NULL ou contient caractere non binaire
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		retun (0);
	while (b[i] != '\0')/*parcourir la chaine*/
	{
		/*si caractere autre que 0 ou 1 est trouve, return 0*/
		if (b[i] != '0' && b[i] != '1')
			return (0);
		/*deplacer ancien resultat vers gauche et ajouter le bit*/
		result = result * 2 + (b[i] - '0');
		i++;
	}
	return (result);
}

