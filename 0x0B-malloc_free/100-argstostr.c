#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 *
 * Return: a pointer to a new string containing all the arguments
 *         separated by a newline character ('\n'), or NULL if fails
 */
char *argstostr(int ac, char **av)
{
    char *str;
    int i, j, len, total_len = 0;

    if (ac == 0 || av == NULL)
        return (NULL);
    for (i = 0; i < ac; i++)
    {
        len = 0;
        while (av[i][len])
            len++;
        total_len += len + 1;
    }
    str = malloc(sizeof(char) * total_len);
    if (str == NULL)
        return (NULL);
    len = 0;
    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j])
        {
            str[len] = av[i][j];
            len++;
            j++;
        }
        str[len] = '\n';
        len++;
    }
    str[len] = '\0';

    return (str);
}
