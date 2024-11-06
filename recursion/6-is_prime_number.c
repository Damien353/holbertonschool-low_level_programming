#include "main.h"
#include <math.h>
/**
 *is_pirme_number - return 1 in the input
 *@n: number
 *Return: 0 success
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1) /*nombre moins que 2 sont pas premiers*/
	{
		return (0);
	}
	if (n == 2) /*2 est un nombre premier*/
	{
		return (1);
	}
	if (n % 2 == 0) /*les nombres pairs autres que 2 sont pas premiers*/
	{
		return (0);
	}
	for (i = 3,; i <= sqrt(n); i += 2) /*teste les diviseurs de 3 jusqu'a sqrt(n)*/
	{
		if (n % i == 0)
		{
			return (0); /*si diviseur trouve, pas premiers*/
		}
	} /*si aucun diviseur trouve, est premiers*/
	return (1);
}
