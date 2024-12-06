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
	while (b[i] != '\0')
	{

