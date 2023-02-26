#include <stdio.h>
/**
* main - Write a program that prints all the numbers of base 16 in lowercase
*
* return : always(0)
*/
int main(void)
{
int i = 0;
char letter;
while (i < 10)
putchar((i % 10) + '0');
++i;
for (letter = 'a' ; letter <= 'f' ; ++letter)
putchar('\n');
return (0);
}
