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
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
