#include "main.h"
/**
 * _isalpha - function checks  a character is an alphabet or not
 * Return: 1 if int c is alphabet, 0 if otherwise
 * @c :  alphabetic character.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
