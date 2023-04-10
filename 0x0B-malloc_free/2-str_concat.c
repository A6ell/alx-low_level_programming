/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: result
 */
#include <stdlib.h>
#include <string.h>
char *str_concat(char *s1, char *s2)
{
	char *result;

	size_t s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	result = malloc(s1_len + s2_len + 1);
	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strcpy(result + s1_len, s2);
	return (result);
}
