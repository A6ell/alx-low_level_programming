#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints out arguments
 * @argc: counts the number of input
 * @argv: array the first being the programs name and file path
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv[0] == NULL)
		return (0);
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
