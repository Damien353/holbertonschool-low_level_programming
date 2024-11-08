#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: element number of line command
 *@argv: array size of argc
 *Return: 0=success
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3) /*verifie si le programme a recu exactement 2 arguments*/
{
	printf("Error\n");
	return (1);
}	/*convertir les arguments en entiers*/
	num1 = atoi(argv[1]); /*convertit le premier*/
	num2 = atoi(argv[2]); /*convertit le second*/
	result = num1 * num2; /*calcul le produit*/

	printf("%d\n", result); /*affiche le resultat*/
	return (0);
}
