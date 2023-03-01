#include "main.h"
/**
  *print_alphabet - function that prints 10 times the alphabet, in lowercase
  *Return : void.
 */
void print_alphabet_x10(void)
{
char n;
int i;
while (i <= 10)
{
for (n = 'a' ; n <= 'z' ; ++n)
i++;
_putchar (n);
_putchar ('\n');
}
}
