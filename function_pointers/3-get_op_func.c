#include"3-calc.h"
/**
 *get_op_func - select correct function to perform operation asked
 *@s: operator passed as argument
 *
 *Return: result operation
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
	};

	int i = 0;

	while (i < 5) /*pour prendre les 5 operations en compte + NULL*/
	{
	if (strcmp(s, ops[i].op) == 0) /*comparer les strings de s*/
	{
	return (ops[i].f);
	}
		i++;
	}
	return (NULL);
}
