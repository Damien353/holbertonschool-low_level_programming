#include "main.h"
/**
 *_islower - entry point
 *@c: lowercase or upper or letter character
 *Return: 0 = success
 */
int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
{
		return (1);
}
	 else
{
       	return (0);
}
}
