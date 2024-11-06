#include "main.h"
/**
 *_pow_recursion - return value of x raised to power of y
 *@x: number
 *@y: number
 *Return: 0 success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /*si y negatif, retourne -1*/
	{
		return (-1);
	}
	if (y == 0) /*cas de base x^0 = 1 pour tout x*/
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1)); /*appel recursif pour x^y*/
}
