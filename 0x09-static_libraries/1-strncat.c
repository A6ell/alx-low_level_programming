#include <string.h>
/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Maximum number of characters to concatenate from source string
 *
 * Return: Pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);

	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
