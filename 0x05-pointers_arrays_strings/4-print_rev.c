/**
 * print_rev - prints a string in reverse order followed by a new line
 * @s: pointer to the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
    int len = 0, i;

    /* calculate the length of the string */
    while (s[len] != '\0')
        len++;

    /* print the string in reverse order */
    for (i = len - 1; i >= 0; i--)
        _putchar(s[i]);

    /* print a new line */
    _putchar('\n');
}