/**
 * _strcpy - copies the string pointed to by src to dest, including the null byte
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    char *dest_start = dest;
    while (*src != '\0')
    {
        *dest++ = *src++;
    }
    *dest = '\0';
    return dest_start;
}