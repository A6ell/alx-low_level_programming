#include "main.h"
/**
 * _memset - Entry point
 * Description: 'replacing certain memories with smt'
 * Parameters: two char and one int inputs
 * @s: input 1
 * @b: input 2
 * @n: int input
 * Return: char modified
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
