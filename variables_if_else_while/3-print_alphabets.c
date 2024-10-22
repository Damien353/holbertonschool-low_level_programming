#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0=success
 */
int main(void)
{
	char lower = "abcdefghijklmnopqrstuvwxyz";
	char upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
{
	for (lower = 'a'; lower <= 'z'; lower++)
	putchar (lower);
}
{	
	for (upper = 'A'; upper <= 'Z'; upper++)
	putchar (upper);
}

	putchar ('\n');
	return (0);
}	
