#include "main.h"
/**
 * _memset - Entry point
 * Description: 'replacing'
 * Parameters: two char
 * @s: input 1
 * @b: input 2
 * @n: int in
 * Return: char that has
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *final;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	final = s;

	return (final);
}
