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
	char ch = 'a';

	do {
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	} while (ch <= 'z');
	putchar('\n');
	return (0);
}
