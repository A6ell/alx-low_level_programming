#include "main.h"
/**
 * _islower - Entry point
 * Description: 'checking if an alphabet is lowercase'
 * Parameters: int 'c' - input to the function
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
