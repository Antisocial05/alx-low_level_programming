#include "main.h"

/**
* print_alphabet - making lowercase alphabet
*
* description: printing loewercase alphabets
*
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
