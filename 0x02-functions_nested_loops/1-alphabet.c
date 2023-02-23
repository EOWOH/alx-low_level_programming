#include "main.h"

/**
 * void print_alphabet(void) - print alphabet in lower case
 *
 * Return: print alphabet
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}
