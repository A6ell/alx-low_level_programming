#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - performs simple operations
 * @argc: the number of arguments passed to the program
 * @argv: the arguments passed to the program
 *
 * Return: 0 if successful, otherwise an error code
 */
int main(int argc, char **argv)
{
    int a, b, result;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        return (98);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);
    op_func = get_op_func(argv[2]);

    if (op_func == NULL)
    {
        printf("Error\n");
        return (99);
    }

    if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
    {
        printf("Error\n");
        return (100);
    }

    result = op_func(a, b);
    printf("%d\n", result);

    return (0);
}
