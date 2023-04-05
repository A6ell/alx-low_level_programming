/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	char *end = s;

	if (*s == '\0')
		return (1);
	while (*(end + 1) != '\0')
		end++;
	while (end > s)
	{
		if (*end != *s)
			return (0);
		end--;
		s++;
	}
	return (1);
}
