#include <stdio.h>
/**
 *main - entry point
 *
 *Return: 0=success
 */
int main(void)
{
	int singleD, singleD2;

	for (singleD = 0; singleD <= 9; singleD++)
{
	for (singleD2 = singleD + 1; singleD2 <= 9; singleD2++)
{		putchar(singleD + '0');
		putchar(singleD2 + '0');
	if (singleD != 8 || singleD2 != 9)
{		putchar(',');
}
}
}
	putchar('\n');
	return (0);
}
