#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-Take the last digit of the number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int Lastdigit = n % 10;
        printf("Last digit of %d is ", n);
	if (Lastdigit > 5)
	{
	printf("%d and is greater than 5\n", Lastdigit);
        }
	else if (Lastdigit == 0)
        {
        printf("%d and is 0\n", Lastdigit);
        }
	else
	{
       	printf("%d and is less than 6 and not 0\n", Lastdigit);
	}
	return (0);
}
