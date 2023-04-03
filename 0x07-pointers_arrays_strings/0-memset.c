#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area to fill
 * @b: the constant byte to fill memory with
 * @n: number of bytes to fill
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	char *result = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (result);
}

