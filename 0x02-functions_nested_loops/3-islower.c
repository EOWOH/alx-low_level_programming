#include "main.h"

/**
 * main -int _islower(int c)
 *
 * print - int _islower
 *
 * @n: int _islower(int c)
 *
 * Return: int _islower(int c)
 */
int _islower(int c)
{
	if ((c >= 65) || (c >= 97))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
