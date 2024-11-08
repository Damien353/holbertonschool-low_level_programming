#include <stdio.h>
/**
 *main - entry point
 *@argc: element number of line command
 *@argv: array size of argc
 *Return: 0=success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
	return (0);
}
