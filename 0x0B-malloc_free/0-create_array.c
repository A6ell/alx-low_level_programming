#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates array of chars and initializes specific char
 * @size: the size of the array to create
 * @c: the char to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fails
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
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
