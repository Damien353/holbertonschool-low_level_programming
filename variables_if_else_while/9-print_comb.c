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
	if (singleD != 7 || singleD != 8)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}
