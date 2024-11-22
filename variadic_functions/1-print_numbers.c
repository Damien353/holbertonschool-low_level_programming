#include"variadic_functions.h"
/**
 * print_numbers - print series de nombres suivi d'un separateur
 * @separator: string print entre les nombres
 * @n: nombre a print
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n); /*initialise la va_list pour pointer le 1er argument*/

	for (i = 0; i < n; i++) /*loop sur les arguments et les prints*/
	{
		printf("%d", va_arg(args, int)); /*print le nombre actuel*/

		/*print separator si pas dernier nombre et non NULL*/
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n"); /*new line*/
	va_end(args); /*clean va_list*/
}
