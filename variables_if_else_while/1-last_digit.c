#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*main - entry
 *
 * return: 0 is success
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;
	printf("Last digit of %d is", n);
	if (last_digit > 5) printf("%d and is greater than 5", n);
	if (last_digit == 0) printf("%d and is 0", n);
	if (last_digit is less than and not 0) printf("%d and is less than 6 and not 0", n);
	return (0);
}
