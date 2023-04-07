#include <string.h>
/**
 * _strcmp - compare two strings lexicographically
 *
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: negative value if s1 is less than s2,
 *         positive value if s1 is greater than s2,
 *         0 if s1 and s2 are equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Compare characters in s1 and s2 */
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
    /* Return difference in ASCII values of differing characters */
	return (s1[i] - s2[i]);
}
