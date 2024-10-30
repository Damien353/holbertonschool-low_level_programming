#include "main.h"
#include <limits.h>
/**
 *_atoi - entry point
 *@s: number
 *Return: 0 success
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int index = 0;
	int digit;

	while (s[index] == ' ')
{
	index++;
}
	while (s[index] == '+' || s[index] == '-')
{
	if (s[index] == '-')
{
	sign *= (-1);
}
	index++;
}
	while (s[index] >= '0' && s[index] <= '9')
{
	digit = s[index] - '0';
	if (result > (INT_MAX - digit) / 10)
{
	return (sign == 1) ? INT_MAX : INT_MIN;
}
	result = result * 10 + digit;
	index++;
}
return result * sign;
}
