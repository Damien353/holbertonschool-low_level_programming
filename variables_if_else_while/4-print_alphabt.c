#include <stdio.h>
/**
 *main - entry point
 *Return: 0=success
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	if (alphabet != 'q' && alphabet != 'e')
		putchar (alphabet);
		return (0);
}
