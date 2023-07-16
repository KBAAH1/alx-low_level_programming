#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always o (Sucess)
*/
int main(void)
{
char L;

L = 'a';
while (L <= 'z')
{
putchar(L);
++L;
}
putchar('\n');
return (0);
}
