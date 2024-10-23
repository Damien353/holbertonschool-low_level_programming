#include <stdio.h>
/**
 *main - entry point
 *
 *Return: 0=success
 */
int main(void)
{
	int singleD;

	for (singleD = 0; singleD <= 9; singleD++)
{
		putchar(singleD + '0');
	if (singleD != 8 || singleD !=9)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}
