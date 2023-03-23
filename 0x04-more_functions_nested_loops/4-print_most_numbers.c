#include "main.h"

/**
 * print_most_numbers - is a function that prints numbers from except 2 and 4
 *
 *Return: the list of numbers in new line
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar('0' + i);
		}
	}
	putchar('\n');
}
