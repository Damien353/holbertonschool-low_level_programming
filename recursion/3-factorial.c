#include "main.h"
/**
 *factorial - return factorial of number
 *@n: number
 *Return: 0 success
 */
int factorial(int n)
{
	if (n < 0) /*erreur n doit etre positif ou zero*/
	{
		return (-1);
	}
	if (n == 0) /*cas de base factorial de 0 = 1*/
	{
		return (1);
	}
	return (n * factorial(n - 1)); /*appel recursif pour calculer le factorial*/
}
