#include "main.h"

/**
 *print_diagonal - is a function that prints numbers
 *@n: number of diagonals
 *Return: the list of numbers in new line
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
