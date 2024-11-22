#include"calc.h"
/**
 *main - chercher argument dans autres fonctions
 *@argc: element de la string
 *@argv: argument selectionne
 *Return: Always 0
 */
int main(int argc, char *argv[]) /*on va aller chercher des arguments*/
{
	int (*ptr_to_func)(int, int);

	if (argc !=4)
	{
		printf("error\n");
		exit(98);
	}

	ptr_to_func = get_op_func(argv[2])
	if (ptr_to_func == NULL)
	{
		printf("error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((ptr_to_func == op.div || ptr_to_func == op_mod) && num2 == 0)
	{
		printf("error\n");
		exit(100);
	}
	printf("%d\n", ptr_to_func(num1, num2));
	return 0;
}
