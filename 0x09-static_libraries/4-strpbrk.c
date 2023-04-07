#include <stddef.h>
/**
 * _strpbrk - function
 * This function searches a string for any of a set of bytes.
 * @s: The string to search
 * @accept: The set of bytes to look for
 * Return: A pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*a == *s)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
