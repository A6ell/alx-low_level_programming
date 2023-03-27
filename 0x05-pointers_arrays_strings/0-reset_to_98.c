/**
 * reset_to_98 - function
 * Description: change value using pointer
 * Parameters: int size input no return
 * @n: integer
 * Return: n
 */

#include "main.h"
void reset_to_98(int *n)
{
	int *p = &n;

	*p = 98;
}
