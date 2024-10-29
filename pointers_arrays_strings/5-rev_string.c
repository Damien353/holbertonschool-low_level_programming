#include "main.h"
/**
 *rev_string - entry point
 *@s: fedv
 *Return: 0 success
 */
void rev_string(char *s)
{
	int left = 0;
	int right = 0;

	while (s[right] != '\0')
{
	right++;
}
	right--;
	while (left < right)
{
	char temp = s[left];

	s[left] = s[right];
	s[right] = temp;
	left++;
	right--;
}
}
