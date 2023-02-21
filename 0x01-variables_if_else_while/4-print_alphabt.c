#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		if (low == 'q' || low == 'e')
		{
			low++;
			continue;
		}
		putchar(low);
		low++;
	}
	putchar('\n');
	return (0);
}
