#include "main.h"
/**
 *leet - entry point
 *@str: string
 *Return: 0 success
 */
char *leet(char *str)
{
	char leet_chars[] = "4433007711";
	char original_chars[] = "aeotlAEOTL";
	char *ptr = str;
	int i;

	while (*ptr)
	{
		for (i = 0; original_chars[i]; i++)
	{
		if (*ptr == original_chars[i])
		{
			*ptr = leet_chars[i];
			break;
		}
	}
		ptr++;
}
	return (str);
}
