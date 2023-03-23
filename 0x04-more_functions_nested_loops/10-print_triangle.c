#include "main.h"

/**
 *print_triangle - is a function that prints numbers
 *@size: number of lines
 *Return: the list of numbers in new line
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)

	{
		for (k = size - 1 - i; k > 0; k--)
		_putchar(' ');
	}
	{
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
