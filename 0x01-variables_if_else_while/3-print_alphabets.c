#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char low_case = 'a';
	char upa_case = 'A';
	while (low_case <= 'z')
	{
		putchar(low_case);
		low_case++;
	}
	while (upa_case <= 'Z')
	{
		putchar(upa_case);
		upa_case++;
	}
	putchar('\n');
	return (0);
}
