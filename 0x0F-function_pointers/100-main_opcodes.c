#include <stdio.h>
#include <stdlib.h>

/**
* print_opcodes - Prints the opcodes of a memory location
*
* @ptr: Pointer to the memory location to print.
* @num_bytes: Number of bytes to print.
*/
void print_opcodes(unsigned char *ptr, int num_bytes);

/**
* main - Entry point of the program.
*
* @argc: Number of arguments passed to the program.
* @argv: Array of strings containing the arguments passed to the program.
*
* Return: Returns 0 on success and a non-zero value on failure.
*/
int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "Error\n");
return (1);
}
int num_bytes = atoi(argv[1]);
if (num_bytes <= 0)
{
fprintf(stderr, "Error\n");
return (2);
}

unsigned char *ptr = (unsigned char *) main;
print_opcodes(ptr, num_bytes);

return (0);
}

void print_opcodes(unsigned char *ptr, int num_bytes)
{
int i;
for (i = 0;  i < num_bytes;  i++)
{
printf("%02x ", *(ptr + i));
}
printf("\n");
}
