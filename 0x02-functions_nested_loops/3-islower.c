#include "main.h"

/**
 * print int _islower(int c) - to check for lowercase character
 *
 * Return: int _islower(int c)
 */
int _islower(int c)
{
	char low = 'a';
	while (low <= 'z')
	{
		if (low == c)
		{
			return (1);
		}
		low++;
	}
	return (0);
	{
		_putchar('\n');
		return (0);
	}
}
