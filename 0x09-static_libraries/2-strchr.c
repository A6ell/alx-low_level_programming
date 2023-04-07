#include <stddef.h>
/**
 * _strchr - main function
 * @s: Char
 * @c: char
 * Return: Null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
