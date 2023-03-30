/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: encoded string
 */
char *leet(char *str)
{
	char *s = str;
	char leet[] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
	char normal[] = {'0', '1', '2', '3', '4', '5', '6', '7'};
	int i, j;

	while (*s)
	{
		i = 0;
		j = 0;
		while (leet[i])
		{
			if (*s == leet[i] || *s == (leet[i] + 32))
			{
				*s = normal[j];
				break;
			}
			i++;
			j++;
		}
		s++;
	}
	return str;
}
