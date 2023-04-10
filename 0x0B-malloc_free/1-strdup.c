#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strdup - copies string
 * @str: input
 * Return: b
 */

char *_strdup(char *str)
{
	int j;

	char *b;

	if (str == NULL)
		return (NULL);
	b = malloc((strlen(str) * sizeof(char)) + 1);
	for (j = 0; str[j] != '\0'; j++)
	{
		b[j] = str[j];
	}
	b[j] = str[j];
	return (b);
	free(b);
}
