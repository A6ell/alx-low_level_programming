#include "main.h"

/**
 *print_array - Prints the second half of a string
 *@a: int 1
 *@n: int 2
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
