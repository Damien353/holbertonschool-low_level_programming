#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *Return: 0=success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');

	return (0);
}
