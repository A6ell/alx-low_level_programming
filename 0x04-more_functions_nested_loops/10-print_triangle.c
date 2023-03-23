#include "main.h"
/**
 * print_triangle - Entry point
 * Description: 'printing a triangle using puts'
 * Parameters: int size input no return
 * @size : size of triangle
 * Return: none
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (k = (size - 1) - i; k > 0; k--)
		{
			putchar(' ');
		}
		for (j = 0; j < i + 1; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
