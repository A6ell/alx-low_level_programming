/**
 * leet - replaces certain characters in a string with leet (1337) equivalents
 *
 * @str: the string to modify
 *
 * Return: a pointer to the modified string
 */

char *leet(char *str)
{
	int i, j;

	char *leet_str = str;

	char *letters = "aAeEoOtTlL";

	char *leet_chars = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				leet_str[i] = leet_chars[j];
				break;
			}
		}
	}
	return (leet_str);
}
