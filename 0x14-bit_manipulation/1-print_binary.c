#include "main.h"

/**
 * print_binary - prints the binary equivalent of decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, numb = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			numb++;
		}
		else if (numb)
			_putchar('0');
	}
	if (!numb)
		_putchar('0');
}