/**
 * print_rev - revese prints the string
 * @s: string
 */

#include <stdio.h>

void print_rev(char *s)
{
	int i;

	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
