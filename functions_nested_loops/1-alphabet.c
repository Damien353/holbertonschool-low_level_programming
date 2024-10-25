#include "main.h"
/**
 *main - entry point
 *Return: 0 is success
 */
void print_alphabet(void)
{
	int i;
	char *alphabet = "abcdefghijklmnopqrstuvwxyz\n";

	for (i = 0; i < 27; i++);
		print_alphabet(alphabet[i]);
	return (0);
}	
