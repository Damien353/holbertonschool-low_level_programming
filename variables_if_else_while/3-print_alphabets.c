#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0=success
 */
int main(void)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (int i = 0; i < 26; i++)
	putchar (lower[i]);

	for (int i = 0; i < 26; i++)
	putchar (upper[i]);

	putchar ('\n');
	return (0);
}	
