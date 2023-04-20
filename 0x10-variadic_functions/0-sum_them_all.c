#include <stdarg.h>
/**
* sum_them_all - calculates the sum of a variable number of integer arguments.
*
* @n: The number of integers that will be passed as variable arguments.
*
* Return: sum of all the integers passed as variable
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list g;

	if (n == 0)
	return (0);
	va_start(g, n);
	for (i = 0; i < n; i++)
	sum += va_arg(s, int);
	va_end(g);
	return (sum);
}

