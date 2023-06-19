#include "main.h"

/**
 * _isupper - returns 1 if the character is upercase
 * @c: the character to check
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
