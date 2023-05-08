/**
* main - Entry point. Copies the content of a file to another file
* @ac: Argument count
* @av: Array of arguments
* Return: 0 on success, otherwise 97, 98, 99, or 100 on error
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024
/**
* copy_file - Copies the content of a file to another file
* @file_from: Source file
* @file_to: Destination file
* Return: 0 on success, otherwise 97, 98, 99, or 100 on error
*/
int copy_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to, read_bytes, write_bytes; 
char buffer[BUFFER_SIZE]; 
mode_t mode; 

mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH; 

fd_from = open(file_from, O_RDONLY); 
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from); 
return (98); 
}

fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode); 
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to); 
close(fd_from); 
return (99); 
}

while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
write_bytes = write(fd_to, buffer, read_bytes); 
if (write_bytes != read_bytes)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to); 
close(fd_from); 
close(fd_to); 
return (99); 
}
}

if (read_bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from); 
close(fd_from); 
close(fd_to); 
return (98); 
}

if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from); 
close(fd_to); 
return (100); 
}

if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to); 
return (100); 
}

return (0); 
}

/**
* main - Entry point.
* @ac: Argument count
* @av: Array of arguments
* Return: 0 on success, otherwise 97, 98, 99, or 100 on error
*/
int main(int ac, char **av)
{
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"); 
return (97); 
}

return (copy_file(av[1], av[2])); 
}

