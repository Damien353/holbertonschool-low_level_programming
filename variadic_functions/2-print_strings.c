#include"variadic_functions.h"
/**
 * print_strings - print series de string
 * @separator: string a print entre les strings
 * @n: le nombre de strings a print
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;
	
	/*initialise va_list sur le premier argument*/
	va_start(args, n);
	/*loop sur les arguments et print*/
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);/*prendre la string actuelle*/
		if (str == NULL)/*si string null, print nil*/
		{
		printf("(nil)");
		}
		else
		{
		printf("%s", str);
		}
	if (separator != NULL && i < n - 1)
	{
		printf("%s", separator); /*print separator si pas last string*/
	}
	}
	printf("\n");
	va_end(args); /*clean va_list*/
}
