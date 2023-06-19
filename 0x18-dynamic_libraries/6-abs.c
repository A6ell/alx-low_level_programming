#include "main.h"
/**
 * _abs - Entry point
 * Description: 'printing absolute value of a number'
 * Parameters: input int n: 'number input to be converted'
 * @n: the character to check
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
