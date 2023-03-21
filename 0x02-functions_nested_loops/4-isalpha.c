#include "main.h"
/**
 * _isalpha - Entry point
 * Description: 'checking if an alphabet or not'
 * Parameters: int 'c' description : 'input to the function'
 * Return: 1 if alphabet 0 otherwise
 */
int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
