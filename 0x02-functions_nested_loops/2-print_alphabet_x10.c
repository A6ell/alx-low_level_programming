#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: 'printing alphabet 10 times using putchar'
 * Parameters: no input no return
 * Return: none
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(j + 97);
		}
		_putchar('\n');
	}
}
