#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char i = 1;
	char j;

	while(i <= 10)
	{
		j = 'a';
		while(j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
