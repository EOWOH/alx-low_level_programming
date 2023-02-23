#include "main.h"

/**
 * print_alphabet_x10 - printing alphabet
 *
 * Return: print_alphabet_x10
 */
void print_alphabet_x10(void)
{
	char i = 1;
	char j;

	while (i <= 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
