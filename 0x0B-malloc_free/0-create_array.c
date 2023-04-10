#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and initializes specific char.
 * @size: of the array
 * character to initialize the array with
 *@c: char
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
