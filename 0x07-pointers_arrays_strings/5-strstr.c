#include <stddef.h>
/**
 * _strstr - function
 * @haystack: 1
 * @needle: 2
 * Return: Null
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *begin = haystack;

		char *subStr = needle;

		while (*haystack && *subStr && *haystack == *subStr)
		{
			haystack++;
			subStr++;
		}
		if (!*subStr)
			return (begin);
		haystack = begin + 1;
	}
	return (NULL);
}
