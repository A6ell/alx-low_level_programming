#include "main.h"

/**
 *more_numbers - is a function that prints numbers from except 2 and 4
 *
 *Return: the list of numbers in new line
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 15; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			putchar(j + '0');
		}
		putchar('\n');
	}
}
