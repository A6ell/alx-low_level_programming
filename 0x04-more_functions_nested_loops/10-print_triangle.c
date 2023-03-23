#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: 'fizz buzz test'
 * Parameters: no input int return
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (((i + 1) % 3 == 0) && ((i + 1) % 5 != 0))
		{
			printf("Fizz ");
			continue;
		}
		else if (((i + 1) % 5 == 0) && ((i + 1) % 3 != 0))
		{
			if (i + 1 == 100)
				printf("Buzz");
			else
			{
				printf("Buzz ");
				continue;
			}
		}
		else if (((i + 1) % 5 == 0) && ((i + 1) % 3 == 0))
		{
			printf("FizzBuzz ");
			continue;
		}
		else
		{
			printf("%i ", i + 1);
		}
	}
	printf("\n");
	return (0);
}
