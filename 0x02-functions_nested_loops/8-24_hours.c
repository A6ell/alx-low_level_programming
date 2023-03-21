#include "main.h"
/**
 * jack_bauer - Entry point
 * Description: 'printing every minute of the day'
 * Parameters: no input
 * Return: no return value
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar('0' + i);
				_putchar(':');
			}
			else
			{
				_putchar('0' + (i % 100) / 10);
				_putchar('0' + (i % 10));
				_putchar(':');
			}

			if (j < 10)
			{
				_putchar('0');
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + (j % 100) / 10);
				_putchar('0' + (j % 10));
			}
			_putchar('\n');
		}
	}

}
