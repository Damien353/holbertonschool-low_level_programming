#include "main.h"
#include <string.h>
/**
 *_strstr - entry point
 *@haystack: char pointer
 *@needle: char pointer
 *Return: 0 success
 */
char *_strstr(char *haystack, char *needle)
{
	int count;

	for (; haystack[0]; haystack++)
	{
		for (count = 0; haystack[count] == needle[count]; count++)
			;
		if (!(needle[count]))
			return (haystack);
	}
	return (0);
}
