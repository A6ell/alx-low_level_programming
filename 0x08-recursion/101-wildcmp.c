/**
 * wildcmp - compare two strings with support for wildcard *
 * @s1: the first string
 * @s2: the second string with optional wildcard *
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	else
	{
		return (*s1 == *s2 && wildcmp(s1 + 1, s2 + 1));
	}
}
