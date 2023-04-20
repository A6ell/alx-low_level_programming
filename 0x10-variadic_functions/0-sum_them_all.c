/**
	* sum_them_all - calculates the sum of a variable number of integer arguments.
	*
	* @n: The number of integers that will be passed as variable arguments.
	*
	* Return: sum of all the integers passed as variable
	* arguments.
	*/
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;

	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}

