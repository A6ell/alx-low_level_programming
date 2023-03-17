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
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(i + 97);
	}
	putchar('\n');
	return (0);
}
