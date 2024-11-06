#include "main.h"
/**
 *_sqtr_recursion - return natural square root of number
 *@n: number
 *Return: 0 success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1); /*la racine carree n'est pas definie dans les entiers*/
	return (_sqtr_recursion(n, 0));
}
