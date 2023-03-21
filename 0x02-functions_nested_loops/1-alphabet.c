#include "main.h"
void print_alphabet(void)
{
    char ch = 'a';

	do

	{
		_putchar(ch);
		ch++;
	} while (ch <= 'z');
	_putchar('\n');
	return (0);
}