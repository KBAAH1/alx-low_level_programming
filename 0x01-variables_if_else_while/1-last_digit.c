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
	int lastdigit = "n % 10";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(lastdigt > 5)
	{
        printf("lastdigit of %d, and is greater than 5\n", n);
        }
	else if(lastdigit == 0)
        {
        printf("lastdigit of %d, and is 0\n", n);
        }
	else(lastdigit < 6 > 0)
	{
       	printf("lastdigit of %d, and is less than 6 and not 0\n", n);
	}
	return (0);
}
