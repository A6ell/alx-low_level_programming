#include "main.h"
int loop(int a, int b, int c);
/**
 * times_table - Entry point
 * Description: 'printing the times table'
 * Parameters: no input
 * Return: no return value
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		int k = 0;

		for (j = 0; j < 10; j++)
		{
			k = loop(i, j, k);
		}
		_putchar('\n');
	}


}

/**
 * loop - Entry point
 * Description: 'loopint through and printing'
 * Parameters: inputs int a, int b and int c
 * @a: the integer i
 * @b: the integer j
 * @c: the integer k
 * Return: 0 if successful 1 if not
 */
int loop(int a, int b, int c)
{
	if (a == 0 || b == 0)
	{
		_putchar('0');
		if (b == 9)
			return (1);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	else if (c + a < 10)
	{
		_putchar('0' + (a + c));
		c = c + a;
		if (b == 9)
			return (1);
		_putchar(',');
		_putchar(' ');
		if (c + a < 10)
		{
			_putchar(' ');
		}
	}
	else
	{
		_putchar('0' + ((c + a) % 100) / 10);
		_putchar('0' + ((c + a) % 10));
		c = c + a;
		if (b == 9)
			return (1);
		_putchar(',');
		_putchar(' ');
	}
	return (c);
}
