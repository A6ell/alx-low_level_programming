/**
 * _memset - Set memory
 * Description: 'replace with smt'
 * Parameters: two char then an input to return char
 * @s: char 1
 * @b: char 2
 * @n: int in
 * Return: modified Char
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
	return (result);
}
