/**
 * main - prints out every argument user inputs
 * @argv: prints out strings of input
 * @argc: counts the number of input
 * Return: 0
 */

#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argc > i; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
