/**
* main - Entry point. Copies the content of a file to another file
*
* Return: 0 on success, otherwise 97, 98, 99, or 100 on error
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

int open_file(const char *filename, int flags, mode_t mode);
void close_file(int fd);
void copy_file(const char *from, const char *to);

/**
* main - Entry point. Copies the content of a file to another file
* @ac: Argument count
* @av: Array of arguments
*
* Return: 0 on success, otherwise 97, 98, 99, or 100 on error
*/
int main(int ac, char **av)
{
if (ac != 3)
{
fprintf(stderr, "Usage: cp file_from file_to\n");
exit(EXIT_FAILURE);
}

copy_file(av[1], av[2]);

return (0);
}

/**
* open_file - Opens a file with the given filename, flags, and mode.
* @filename: The name of the file to open.
* @flags: The flags to use when opening the file.
* @mode: The mode to use when creating the file.
*
* Return: The file descriptor of the opened file.
*/
int open_file(const char *filename, int flags, mode_t mode)
{
int fd = open(filename, flags, mode);
if (fd == -1)
{
fprintf(stderr, "Error: Can't open file %s\n", filename);
exit(EXIT_FAILURE);
}
return (fd);
}

/**
* close_file - Closes the file with the given file descriptor.
* @fd: The file descriptor of the file to close.
*/
void close_file(int fd)
{
if (close(fd) == -1)
{
fprintf(stderr, "Error: Can't close fd %d\n", fd);
exit(EXIT_FAILURE);
}
}

/**
* copy_file - Copies the contents of one file to another.
* @from: The name of the file to copy from.
* @to: The name of the file to copy to.
*/
void copy_file(const char *from, const char *to)
{
int fd_from = open_file(from, O_RDONLY, 0);
int fd_to = open_file(to, O_WRONLY | O_CREAT | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

char buffer[BUFFER_SIZE];
ssize_t nread;

while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
ssize_t nwritten = write(fd_to, buffer, nread);
if (nwritten == -1 || nwritten != nread)
{
fprintf(stderr, "Error: Can't write to file %s\n", to);
exit(EXIT_FAILURE);
}
}

if (nread == -1)
{
fprintf(stderr, "Error: Can't read from file %s\n", from);
exit(EXIT_FAILURE);
}

close_file(fd_from);
close_file(fd_to);
}
