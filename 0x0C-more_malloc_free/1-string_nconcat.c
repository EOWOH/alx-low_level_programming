#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, k = 0, dist1 = 0, dist2 = 0;

	while (s1 && s1[dist1])
		dist1++;
	while (s2 && s2[dist2])
		dist2++;

	if (n < dist2)
		s = malloc(sizeof(char) * (dist1 + n + 1));
	else
		s = malloc(sizeof(char) * (dist1 + dist2 + 1));
	if (!s)
		return (NULL);

	while (i < dist1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < dist2 && i < (dist1 + n))
		s[i++] = s2[k++];
	while (n >= dist2 && i < (dist1 + dist2))
		s[i++] = s2[k++];

	s[i] = '\0';

	return (s);
}

