#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *str = "_putchar";

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}
