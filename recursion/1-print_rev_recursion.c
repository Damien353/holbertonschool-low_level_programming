#include "main.h"
/**
 *_print_rev_recursion - entry point
 *@s: caractere
 *Return: 0 success
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /*condition atteint fin de chaine*/
	{
		return;
	}
	_print_rev_recursion(s + 1); /*appel recursif pour le prochain caractere*/
	_putchar(*s); /*affiche le caractere actuel après la recursion*/
}
