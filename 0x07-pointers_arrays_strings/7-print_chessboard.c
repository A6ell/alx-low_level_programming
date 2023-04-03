#include "main.h"
/**
 * print_chessboard - takes a 2D array of characters as input
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	int i;

	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar((*a)[j]);
			if (j == 7)
			_putchar('\n');
		}
		a++;
	}
}
