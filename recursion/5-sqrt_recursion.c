#include "main.h"
/**
 *_sqrt_recursion - return natural square root of number
 *@n: number
 *Return: 0 success
 */
int _sqrt_recursion(int n)
{
	return _sqrt_helper(n, 0); /* Lancer la recherche avec un "guess" initial de 0*/
}

int _sqrt_helper(int n, int guess)
{
	/* Si le carré du "guess" est égal à n, on a trouvé la racine ee*/
	if (guess * guess == n)
	return (guess);
	/*Si le carré du "guess" est supérieur à n, il n'y a pas de racine carrée ex*/
	if (guess * guess > n)
	return (-1);
	/*Sinon, on incrémente "guess" et on continue la récursi*/
	return _sqrt_helper(n, guess + 1);
}
