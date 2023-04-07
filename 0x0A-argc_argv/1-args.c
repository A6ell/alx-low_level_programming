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
	int i;

	for (i = 0; argc < 1; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
