#include <stdio.h>
/**
* main - Write a program that prints all the numbers of base 16 in lowercase
*
* return : always(0)
*/
int main(void)
{
int i = 0;
int j = 'a';
{
while (i <= 9)
putchar( i);
i++;
}
{
while (j <= 'f')
putchar (j);
j++;
}
putchar('\n');
return (0);
}
