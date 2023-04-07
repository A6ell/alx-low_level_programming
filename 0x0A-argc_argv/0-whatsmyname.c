#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out name of file and its path
 * @argc: counts the number of input
 * @argv: array the first being the programs name and file path
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 1)
		return (1);
	printf("%s\n", argv[0]);
	return (0);
}
