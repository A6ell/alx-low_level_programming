#include "main.h"

/**
 *print_triangle - is a function that prints numbers
 *@size: number of lines
 *Return: the list of numbers in new line
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	int i, j;

	for (i = 2; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
