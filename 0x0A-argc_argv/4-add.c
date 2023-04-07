#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function
 * @argc: count
 * @argv: strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int add = 0;

	int i;

	if (argc == 1)
	{
		printf("%s/n", "0");
		return (0);
	}
	for (i = 0; i < argc - 1; i++)
	{
		if (check_digit(argv[i + 1]) == 1)
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	for (i = 0; i < argc - 1; i++)
	{
		add += atoi(argv[i + 1]);
	}
	printf("%d\n", add);
	return (0);
}
/**
 * check_digit - checks if its digit
 * @b: char
 * Return: 0
 */

int check_digit(char b[])
{
	int j;

	for (j = 0; b[j] != '\0'; j++)
	{
		if (!isdigit(b[j]))
			return (1);
	}
	return (0);
}
