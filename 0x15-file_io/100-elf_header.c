/**
* main - entry point
*
* @argc: the number of arguments passed to the program
* @argv: an array of strings containing the arguments passed to the program
*
* Return: 0 on success, 98 on failure
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <elf.h>

int main(int argc, char *argv[])
{
int i;
int fd;
struct stat sb;
void *addr;
Elf64_Ehdr *hdr;

if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}

fd = open(argv[1], O_RDONLY);
if (fd < 0)
{
perror("open");
exit(98);
}

if (fstat(fd, &sb) < 0)
{
perror("fstat");
exit(98);
}
addr = mmap(NULL, sb.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
if (addr == MAP_FAILED)
{
perror("mmap");
exit(98);
}

hdr = (Elf64_Ehdr *) addr;

if (hdr->e_ident[EI_MAG0] != ELFMAG0 ||
hdr->e_ident[EI_MAG1] != ELFMAG1 ||
hdr->e_ident[EI_MAG2] != ELFMAG2 ||
hdr->e_ident[EI_MAG3] != ELFMAG3)
{
fprintf(stderr, "%s: not an ELF file\n", argv[1]);
exit(98);
}

printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0;   i < EI_NIDENT;   i++)
{
printf("%02x ", hdr->e_ident[i]);
}
printf("\n");

printf("Class:%s\n", hdr->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
printf("Data: %s\n", hdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
printf("Version:%u\n", hdr->e_ident[EI_VERSION]);
printf("OS/ABI: %s\n", hdr->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "UNIX - Other");
printf("ABI Version:%d\n", hdr->e_ident[EI_ABIVERSION]);
printf("Type: %s\n", hdr->e_type == ET_EXEC ? "EXEC (Executable file)" : (hdr->e_type == ET_DYN ? "DYN (Shared object file)" : "OTHER"));
printf("Entry point address:%lx\n", hdr->e_entry);
printf("\n");

munmap(addr, sb.st_size);
close(fd);

return (0);
}
