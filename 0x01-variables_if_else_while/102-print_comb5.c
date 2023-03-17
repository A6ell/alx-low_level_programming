#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 * Description:'using printf'
 * Parameters:no input returns an int
 * Return: Always 0 (success)
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = num1; num2 < 100; num2++)
		{
			int d1 = num1 / 10;
			int d2 = num1 % 10;
			int d3 = num2 / 10;
			int d4 = num2 % 10;

			if (num1 != num2)
			{
				if (num1 < num2)
				{
					putchar(d1 + '0');
					putchar(d2 + '0');
					putchar(' ');
					putchar(d3 + '0');
					putchar(d4 + '0');
					if (num1 != 98 || num2 != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
