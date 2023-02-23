#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
char c;
char l;
for (c = 'a'; c <= 'z'; ++c)
{
	putchar(c);
}
for (l = 'A'; l <= 'Z'; ++l)
{
	putchar(l);
}
putchar('\n')
return (0);
}
