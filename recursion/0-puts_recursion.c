#include "main.h"
/**
 *_puts_recursion - entry point
 *@s: caractere
 *Return: 0 success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /*condition si on atteint la fin de la chaine*/
	{
		_putchar('\n'); /*afficher une nouvelle ligne*/
		return;
	}
	_putchar(*s); /*affiche le caractere courant*/
	_puts_recursion(s + 1); /*appel recursif avec le prochain caractere*/
}
