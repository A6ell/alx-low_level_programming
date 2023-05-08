/**
 * read_textfile - Reads text file and prints contents to standard output.
 * @filename: Pointer to a null-terminated string.
 * @letters: Number of bytes to read and print.
 *
 * Return: If successful, the number of bytes read and printed. Otherwise, 0.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytes_read, bytes_written;

if (!filename)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * (letters + 1));
if (!buffer)
return (0);

bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}

buffer[bytes_read] = '\0';
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
free(buffer);
close(fd);

if (bytes_written != bytes_read)
return (0);

return (bytes_read);
}
