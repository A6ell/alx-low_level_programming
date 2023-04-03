/**
 * _memset - Set momery
 * @s: pionter
 * @b: char
 * @n: int
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	char *result;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	result = s;
	return (s);
}
