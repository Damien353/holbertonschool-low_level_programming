#include <stdio.h>
/**
 *main - entry point
 *@argc: element number of line command
 *@argv: array size of argc
 *Return: 0=success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
