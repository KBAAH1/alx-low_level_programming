#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *main-Take the last digit of the number
 *
 *Return:SUCCESS value
 */
int main(void)
{
	int n;
	n = "n % 10";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
        printf("%d, and is greater than 5\n", n);
        }
	else if (n == 0)
        {
	  printf("%d, and is 0\n", n);
        }
	else (n < 6 != 0)
	{
       	printf("%d, and is less than 6 and not 0\n", n);
	}
	return (0);
}
