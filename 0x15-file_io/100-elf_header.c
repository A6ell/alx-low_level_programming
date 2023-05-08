#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_error(char *msg)
{
fprintf(stderr, "Error: %s\n", msg);
exit(98);
}

int main(int argc, char **argv)
{
if (argc != 2)
print_error("Usage: elf_header elf_filename");

int fd = open(argv[1], O_RDONLY);
if (fd < 0)
print_error("Could not open file");

Elf32_Ehdr header;
if (read(fd, &header, sizeof(header)) != sizeof(header))
print_error("Could not read ELF header");

if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
print_error("Not an ELF file");

printf("Magic:   ");
for (int i = 0;  i < EI_NIDENT;  i++)
printf("%02x ", header.e_ident[i]);
printf("\n");

printf("Class:                             %s\n",
header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
"Invalid");

printf("Data:                              %s\n",
header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
"Invalid");

printf("Version:                           %d (current)\n", header.e_ident[EI_VERSION]);

printf("OS/ABI:                            ");
switch (header.e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:     printf("UNIX System V ABI");  break;
case ELFOSABI_HPUX:     printf("HP-UX ABI");  break;
case ELFOSABI_NETBSD:   printf("NetBSD ABI");  break;
case ELFOSABI_LINUX:    printf("Linux ABI");  break;
case ELFOSABI_SOLARIS:  printf("Solaris ABI");  break;
case ELFOSABI_AIX:      printf("AIX ABI");  break;
case ELFOSABI_IRIX:     printf("IRIX ABI");  break;
case ELFOSABI_FREEBSD:  printf("FreeBSD ABI");  break;
case ELFOSABI_TRU64:    printf("Tru64 UNIX ABI");  break;
case ELFOSABI_MODESTO:  printf("Novell Modesto ABI");  break;
case ELFOSABI_OPENBSD:  printf("OpenBSD ABI");  break;
default:                printf("Unknown ABI");  break;
}
printf("\n");

printf("ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);

printf("Type:                              ");
switch (header.e_type)
{
case ET_NONE:  printf("NONE (No file type)");  break;
case ET_REL:   printf("REL (Relocatable file)");  break;
case ET_EXEC:  printf("EXEC (Executable file)");  break;
case ET_DYN:   printf("DYN (Shared object file)");  break;
case ET_CORE   printf("Entry point address:%#lx\n", (unsigned long)header.e_entry);

return (0);

