#include"3-calc.h"
/**
 *main - chercher argument dans autres fonctions
 *@argc: element de la string
 *@argv: argument selectionne
 *Return: Always 0
 */
int main(int argc, char *argv[]) /*on va aller chercher des arguments*/
{
	int (*ptr_to_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr_to_func = get_op_func(argv[2]);

	if (ptr_to_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", ptr_to_func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
