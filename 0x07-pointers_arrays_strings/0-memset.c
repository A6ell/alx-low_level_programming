#include "main.h"
/**
 * _memset - Entry
 * Description: 'replacing memories with smt'
 * Parameters: returns a char
 * @s: char 1
 * @b: char 2
 * @n: input
 * Return: char  modified
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *result;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	result = s;

	return (result);
}
