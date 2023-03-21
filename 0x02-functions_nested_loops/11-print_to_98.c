#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * Description: 'printing to 98'
 * Parameters: int input
 * @n: integer input
 * Return: no return value
 */
void print_to_98(int n)
{
	int i = 0;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%i, ", i);
		}
		printf("%i\n", 98);
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
		printf("%i\n", 98);
	}
	else
		printf("%i\n", 98);
}
