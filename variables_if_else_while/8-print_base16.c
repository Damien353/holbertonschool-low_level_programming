#include <stdio.h>
/**
 *main - entry point
 *
 *Return: 0=success
 */
int main(void)
{
	char letnum;

	for (letnum = 0; letnum < 16; letnum++)
{
	if (letnum < 10)
{		putchar (letnum + '0');
}
	else
{
	putchar (letnum - 10 + 'a');
}
}
	putchar ('\n');
	return (0);
}
