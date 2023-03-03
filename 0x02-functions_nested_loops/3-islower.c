#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 * Return: if character is lowrcase
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
