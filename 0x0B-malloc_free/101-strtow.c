#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count the words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
    int i, count = 0;

    for (i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            ++count;
        }
    }

    return count;
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
    int i, j, k, len, words;
    char **tab;

    if (str == NULL || *str == '\0')
    {
        return NULL;
    }

    words = count_words(str);
    tab = malloc((words + 1) * sizeof(char *));
    if (tab == NULL)
    {
        return NULL;
    }

    for (i = 0, j = 0; i < words; ++i)
    {
        while (str[j] == ' ')
        {
            ++j;
        }

        len = 0;
        while (str[j + len] != ' ' && str[j + len] != '\0')
        {
            ++len;
        }

        tab[i] = malloc((len + 1) * sizeof(char));
        if (tab[i] == NULL)
        {
            for (k = 0; k < i; ++k)
            {
                free(tab[k]);
            }
            free(tab);
            return NULL;
        }

        strncpy(tab[i], &str[j], len);
        tab[i][len] = '\0';
        j += len;
    }

    tab[words] = NULL;
    return tab;
}