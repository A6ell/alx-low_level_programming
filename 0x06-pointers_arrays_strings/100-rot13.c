#include "main.h"
/**
 * rot13 - Entry point
 * Description: 'encoding a string using rot13'
 * Parameters: char input returns a char
 * @str: char input
 * Return: Always 0 (Success)
 */

char *rot13(char *str)
{
	int i, j;

	char *leet_str = str;

	char *letters = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

	char *leet_chars = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

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
