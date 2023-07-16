#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always o (Sucess)
 */
int main(void)
{
char L, l;

L = 'a';
l = 'A';
while (L <= 'z')
{
putchar(L);
++L;
}
while (l <= 'Z')
{
putchar(l);
++l;
}
putchar('\n');
return (0);
}
