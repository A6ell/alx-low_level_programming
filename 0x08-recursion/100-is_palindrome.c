#include <stdio.h>

/**
 * is_palindrome - check if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i;

	int len = 0;

	char *p = s;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			return (0);
		}
	}
	return (1);
}
