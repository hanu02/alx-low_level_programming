#include "main.h"
/**
  *Main - Write a function that prints 10 times the alphabet, in lowercase
  *Return : void.
 */
void print_alphabet_x10(void)
{
char n;

for (n = 'a' ; n <= 'z' ; ++n)
while (n <= 10)
n++;
_putchar (n);
_putchar ('\n');
}
