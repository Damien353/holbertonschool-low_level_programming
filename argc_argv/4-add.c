#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - entry point
 *@argc: element number of line command
 *@argv: array size of argc
 *Return: 0=success
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum;

	if (argc == 1) /*verifie le nombre darguments (au moins 1 pour le nom progr*/
	{
		printf("0\n"); /*si aucun passe, affiche 0*/
		return (0);
	}
	/*parcourt tous les arguments*/
	for (i = 1; i < argc; i++)
		/*verifie si chaque argument contient que des chiffres*/
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if(!isdigit(argv[i][j]))
			{
				/*si argument contient caractere non numerique*/
			printf("Error\n");
			return (1);
			}
		}
		/*ajoute argument a la somme*/
		sum += atoi(argv[i]); /*convertit la chaine et ajoute a la somme*/
	}
	printf("%d\n", sum);
	return (0);
}
