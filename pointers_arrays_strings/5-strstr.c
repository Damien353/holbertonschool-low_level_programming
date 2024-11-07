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

	for (; haystack[0]; haystack++) /*parcourt caractere un par un et continue tant que non nul*/
	{
		for (count = 0; haystack[count] == needle[count]; count++) /*compare needle et haystack a partir de ce dernier*/
			/*tant que egaux continue et incremente, se termine si plus egal ou needle est nul*/
			;
		if (!(needle[count])) /*retourne haystack si needle[count] est nul*/
			return (haystack);
	}
	return (0);
}
