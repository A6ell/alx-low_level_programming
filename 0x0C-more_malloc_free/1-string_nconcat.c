/**
 *string_nconcat - concatenates two strings, using at most n bytes from s2
 * @s1: the first string to be concatenated
 * @s2: the second string to be concatenated
 * @n: the maximum number of bytes to be used from s2
 * Return: result
 */

#include <stdlib.h>
#include <string.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;

	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	result = malloc(len1 + n + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0;  i < len1;  i++)
		result[i] = s1[i];
	for (j = 0;  j < n;  j++)
		result[i + j] = s2[j];
	result[i + j] = '\0';
	return (result);
}
