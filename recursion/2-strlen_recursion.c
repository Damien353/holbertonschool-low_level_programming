#include "main.h"
/**
 *_strlen_recursion - return length of a string
 *@s: caractere
 *Return: 0 success
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /*condition si on atteint la fin de chaine*/
	{
		return (0); /*longueur d'une chaine vide est 0*/
	}
	return (1 + _strlen_recursion(s + 1)); /*compte caractere actuel + longueur reste de la chaine*/
}
