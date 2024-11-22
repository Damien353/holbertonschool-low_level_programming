#include"variadic_functions.h"
/**
 * sum_them_all - retourne la somme de tous les parametres
 *@n: nombre d'arguments
 *
 *Return: la somme de tous les arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;

	if (n == 0)
		return (0);

	va_list args; /*initialise va_list pour acceder aux arguments variadic*/
	va_start(args, n);

	/*additionner les arguments*/
	for (i = 0; i < n; i++)
	{
		sum += va_args(args, int); /*on recupere l'argument et on ajoute a sum*/
	}
	va_end(args); /*on nettoie la va_list apres utilisation*/
	return (sum);
}
