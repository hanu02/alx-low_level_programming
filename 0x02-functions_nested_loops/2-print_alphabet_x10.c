#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 * Return : void.
 */
void print_alphabet_x10(void)
{
char n;
int i;
while (i <= 10)
{
for (n = 'a' ; n <= 'z' ; ++n)
_putchar (n);
_putchar ('\n');
i++;
}
}
