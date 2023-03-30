/**
 * rot13 - rotated aplphabet
 * @s: The string to encode.
 * Return: A pointer to the encoded string
 */

char *rot13(char *s)
{
	int i, j;

	char *result = s;

	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == *(rot + j))
			{
				*(result + i) = *(rot + j);
				break;
			}
			else if (*(s + i) == *(rot + j + 26))
			{
				*(result + i) = *(rot + j + 26);
				break;
			}
		}
	}
	return (result);
}
