#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: 'printing alphabet using putchar'
 * Parameters: no input no return
 * Return: none
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(i + 97);
	}
	_putchar('\n');
}
