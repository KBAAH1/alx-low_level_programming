#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always o (Sucess)
*/
int main(void)
{
char k;

k = 'z';
while (k <= 'a')
{
putchar(k);
++k;
}
putchar('\n');
return (0);
}
