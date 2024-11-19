#include<stdlib.h>
#include"function_pointers.h"
/**
 *print_name - print a name
 *@name: name user
 *@f: pointer of function
 *Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
	while (*name)
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
}
