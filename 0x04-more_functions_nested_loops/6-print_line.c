#include "main.h"

/**
 *print_line - is a function that prints numbers
 *@n: number of lines
 *Return: the list of numbers in new line
 */

void print_line(int n)
{
	int i;
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
